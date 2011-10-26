<?php

/**
 * @file Implementation of View Fetcher (dummy Fetcher)
 */

/**
 * Definition of the import batch object created on the fetching stage by
 * FeedsViewFetcher.
 * @package feeds
 * @author aditya
 */
class FeedsShubSensorBoardDataBatch extends FeedsImportBatch {
  protected $view_name;
  protected $display_id;

  /**
   * Constructor.
   */
  public function __construct($view_details) {
    $this->view_name = $view_details['view'];
    $this->display_id = $view_details['display_name'];
    
    parent::__construct();
  }

  /**
   * Implementation of FeedsImportBatch::getRaw();
   */
  public function getRaw() {
    if (!is_array($this->raw)) {
      $results = views_get_view_result($this->view_name, $this->display_id);
      foreach ($results as $result) {
        // Standardize the data structure so parsers don't choke
        // @todo I'm not sure if there is a use case for passing along the full $result - rjstatic
        $this->raw[] = array(
            'data' => $result->shub_sensor_board_data_data
        );
        // Mark this data row as fetched so we don't fetch it again
        // @todo Fetched status could reside in a seperate table with a unique key using the feed_importer's 
        // unique ID in case multiple importers want to process the data... This seems like better design
        // but I'm not certain we really need it.  
        db_query('update shub_sensor_board_data SET status=1 WHERE id=%d', $result->id);
      }
    }
    return $this->raw;
  }
  
  /**
   * Get the view name stored in the FeedsImportBatch
   */
  public function getViewName() {
    return $this->view_name;
  }
  
  /**
   * Get the view display id stored in the FeedsImportBatch
   */
  public function getDisplayId() {
    return $this->display_id;
  }
}
 
class FeedsShubSensorBoardDataFetcher extends FeedsFetcher {
  protected $batch;
  
  /**
   * The FeedsImportBatch might need to be retrieved more than once.
   * Thus, provide a variable in the Fetcher class that contain the
   * FeedsImportBatch object
   */
  public function fetch(FeedsSource $source) {
    if (!isset($batch)) {
      $source_config['source'] = array("view" => "feeds_shub_sensor_board_data", "display" => "default");
      $batch = new FeedsShubSensorBoardDataBatch($source_config['source']);
    }
    return $batch;
  }
  
  /**
   * Get the batch file
   * This function must be called only after fetch() has been called.
   */
  public function getBatch() {
    return $batch;
  }
}

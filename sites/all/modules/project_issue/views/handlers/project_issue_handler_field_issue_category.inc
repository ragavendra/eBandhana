<?php


/**
 * Field handler to display the current category of an issue.
 */
class project_issue_handler_field_issue_category extends views_handler_field {
  function render($values) {
    module_load_include('inc', 'project_issue', 'issue');
    return check_plain(project_issue_category($values->{$this->field_alias}));
  }
}


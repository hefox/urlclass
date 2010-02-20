(function ($) {

function urlclassAttach(context) {
  for(var url in login_destination = Drupal.settings.urlclass.urls) {
    $("a[href*='"+ url + "']").addClass(Drupal.settings.urlclass.urls[url]);
  }
}
Drupal.behaviors.urlclass = function(context) {
 	urlclassAttach(context);
} 
})(jQuery);

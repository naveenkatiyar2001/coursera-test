$(document).ready(function () {
  // Initialize Bootstrap dropdown
  $('.dropdown-toggle').dropdown();

  // Custom dropdown handling
  $('.dropdown-menu a').on('click', function (e) {
    e.preventDefault();
    var target = $(this).data('target');
    $('.column').hide();
    $('#' + target).fadeIn();
  });
});

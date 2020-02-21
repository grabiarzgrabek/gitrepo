$(document). ready(function() {
  $(".wynik").text("Nowa tresc");
  console.log(($("p").text()));
  $("#przycisk").click(function(){
     var vnk = parseInt($("#vnk").val());
     var nk = parseInt($("#nk").val());
     var R = vnk / nk * 100;
     var div2 = '<div class="wspolczynnik">'+R+'</div>';
     $("div.wynik").after(div2);
  });
  $("input").mousemove(function(){
    $(this).addClass("tloBlue")
  });
});

$(document).ready(function(){
  $(".wynik").text("Nowa treść");
  console.log($("p").text());
  $("#przycisk").click(function(){
    var vnk = parseInt($("#vnk").val());
    var nk = parseInt($("#nk").val());
    var R = vnk / nk * 100;
    var div2 = '<div class="wspolczynnik">'+R+'</div>';
    $("div.wynik").after(div2);
  });
  $("input").mouseover(function(){
    $(this).addClass("tłoBlue");
  });
  $("input").mouseout(function(){
    $(this).removeClass("tłoBlue");
  });
});
  $("#i3").mouseover(function(){
    $("#i4").toggle();
  });
  $("#i3").mouseout(function(){
    $("#i4").toggle();
  });
  $("#i3").mouseover(function(){
    $("#i4").hide(100);
  });
  $("#i3").mouseout(function(){
    $("#i4").show(100);
  });

  $("#tytul").click(function(){
    $("#tresc").slidedown("slow");
  });

#include <pebble.h>
#include "iconmap.h"
#include "string.h"


void code_to_text(int OWMCode, char* icon, TextLayer *IconLayer ){ 

  
 if (strcmp(icon,"01n")==0 ||
      strcmp(icon,"02n")==0 ||
      strcmp(icon,"03n")==0 ||
      strcmp(icon,"04n")==0 ||
      strcmp(icon,"05n")==0 ||
      strcmp(icon,"06n")==0 ||
      strcmp(icon,"07n")==0 ||
      strcmp(icon,"08n")==0 ||
      strcmp(icon,"09n")==0 ||
      strcmp(icon,"10n")==0 ||
      strcmp(icon,"11n")==0 ||
      strcmp(icon,"12n")==0 ||
      strcmp(icon,"13n")==0 ||
      strcmp(icon,"50n")==0 ){
           
               if (OWMCode ==200){text_layer_set_text(IconLayer,"6");} //thunderstorm with light rain
          else if (OWMCode ==201){text_layer_set_text(IconLayer,"6");} //thunderstorm with rain
          else if (OWMCode ==202){text_layer_set_text(IconLayer,"&");} //thunderstorm with heavy rain
          else if (OWMCode ==210){text_layer_set_text(IconLayer,"6");} //light thunderstorm
          else if (OWMCode ==211){text_layer_set_text(IconLayer,"6");} //thunderstorm
          else if (OWMCode ==212){text_layer_set_text(IconLayer,"&");} //heavy thunderstorm
          else if (OWMCode ==221){text_layer_set_text(IconLayer,"6");} //ragged thunderstorm
          else if (OWMCode ==230){text_layer_set_text(IconLayer,"6");} //thunderstorm with light drizzle
          else if (OWMCode ==231){text_layer_set_text(IconLayer,"6");} //thunderstorm with drizzle
          else if (OWMCode ==232){text_layer_set_text(IconLayer,"&");} //thunderstorm with heavy drizzle
          else if (OWMCode ==300){text_layer_set_text(IconLayer,"7");} //light intensity drizzle
          else if (OWMCode ==301){text_layer_set_text(IconLayer,"7");} //drizzle
          else if (OWMCode ==302){text_layer_set_text(IconLayer,"8");} //heavy intensity drizzle
          else if (OWMCode ==310){text_layer_set_text(IconLayer,"7");} //light intensity drizzle rain
          else if (OWMCode ==311){text_layer_set_text(IconLayer,"7");} //drizzle rain
          else if (OWMCode ==312){text_layer_set_text(IconLayer,"8");} //heavy intensity drizzle rain
          else if (OWMCode ==313){text_layer_set_text(IconLayer,"7");} //shower rain and drizzle
          else if (OWMCode ==314){text_layer_set_text(IconLayer,"8");} //heavy shower rain and drizzle
          else if (OWMCode ==321){text_layer_set_text(IconLayer,"7");} //shower drizzle
          else if (OWMCode ==500){text_layer_set_text(IconLayer,"7");} //light rain
          else if (OWMCode ==501){text_layer_set_text(IconLayer,"7");} //moderate rain
          else if (OWMCode ==502){text_layer_set_text(IconLayer,"8");} //heavy intensity rain
          else if (OWMCode ==503){text_layer_set_text(IconLayer,"8");} //very heavy rain
          else if (OWMCode ==504){text_layer_set_text(IconLayer,"8");} //extreme rain
          else if (OWMCode ==511){text_layer_set_text(IconLayer,"!");} //freezing rain
          else if (OWMCode ==520){text_layer_set_text(IconLayer,"7");} //light intensity shower rain
          else if (OWMCode ==521){text_layer_set_text(IconLayer,"7");} //shower rain
          else if (OWMCode ==522){text_layer_set_text(IconLayer,"8");} //heavy intensity shower rain
          else if (OWMCode ==531){text_layer_set_text(IconLayer,"7");} //ragged shower rain
          else if (OWMCode ==600){text_layer_set_text(IconLayer,"U");} //light snow
          else if (OWMCode ==601){text_layer_set_text(IconLayer,"U");} //snow
          else if (OWMCode ==602){text_layer_set_text(IconLayer,"#");} //heavy snow
          else if (OWMCode ==611){text_layer_set_text(IconLayer,"U");} //sleet
          else if (OWMCode ==612){text_layer_set_text(IconLayer,"U");} //shower sleet
          else if (OWMCode ==615){text_layer_set_text(IconLayer,"U");} //light rain and snow
          else if (OWMCode ==616){text_layer_set_text(IconLayer,"U");} //rain and snow
          else if (OWMCode ==620){text_layer_set_text(IconLayer,"U");} //light shower snow
          else if (OWMCode ==621){text_layer_set_text(IconLayer,"U");} //shower snow
          else if (OWMCode ==622){text_layer_set_text(IconLayer,"W");} //heavy shower snow
          else if (OWMCode ==701){text_layer_set_text(IconLayer,"M");} //mist
          else if (OWMCode ==711){text_layer_set_text(IconLayer,"M");} //smoke
          else if (OWMCode ==721){text_layer_set_text(IconLayer,"E");} //haze
          else if (OWMCode ==731){text_layer_set_text(IconLayer,"E");} //sand, dust whirls
          else if (OWMCode ==741){text_layer_set_text(IconLayer,"M");} //fog
          else if (OWMCode ==751){text_layer_set_text(IconLayer,"E");} //sand
          else if (OWMCode ==761){text_layer_set_text(IconLayer,"E");} //dust
          else if (OWMCode ==762){text_layer_set_text(IconLayer,"M");} //volcanic ash
          else if (OWMCode ==771){text_layer_set_text(IconLayer,"E");} //squalls
          else if (OWMCode ==781){text_layer_set_text(IconLayer,"E");} //tornado
          else if (OWMCode ==800){text_layer_set_text(IconLayer,"2");} //clear sky
          else if (OWMCode ==801){text_layer_set_text(IconLayer,"4");} //few clouds
          else if (OWMCode ==802){text_layer_set_text(IconLayer,"4");} //scattered clouds
          else if (OWMCode ==803){text_layer_set_text(IconLayer,"4");} //broken clouds
          else if (OWMCode ==804){text_layer_set_text(IconLayer,"4");} //overcast clouds
          else if (OWMCode ==900){text_layer_set_text(IconLayer,")");} //tornado
          else if (OWMCode ==901){text_layer_set_text(IconLayer,")");} //tropical storm
          else if (OWMCode ==902){text_layer_set_text(IconLayer,")");} //hurricane
          else if (OWMCode ==903){text_layer_set_text(IconLayer,"!");} //cold
          else if (OWMCode ==904){text_layer_set_text(IconLayer,"2");} //hot
          else if (OWMCode ==905){text_layer_set_text(IconLayer,"F");} //windy
          else if (OWMCode ==906){text_layer_set_text(IconLayer,"$");} //hail
          else if (OWMCode ==951){text_layer_set_text(IconLayer,"A");} //calm
          else if (OWMCode ==952){text_layer_set_text(IconLayer,"F");} //light breeze
          else if (OWMCode ==953){text_layer_set_text(IconLayer,"F");} //gentle breeze
          else if (OWMCode ==954){text_layer_set_text(IconLayer,"F");} //moderate breeze
          else if (OWMCode ==955){text_layer_set_text(IconLayer,"F");} //fresh breeze
          else if (OWMCode ==956){text_layer_set_text(IconLayer,"F");} //strong breeze
          else if (OWMCode ==957){text_layer_set_text(IconLayer,"F");} //high wind, near gale
          else if (OWMCode ==958){text_layer_set_text(IconLayer,"F");} //gale
          else if (OWMCode ==959){text_layer_set_text(IconLayer,"F");} //severe gale
          else if (OWMCode ==960){text_layer_set_text(IconLayer,"F");} //storm
          else if (OWMCode ==961){text_layer_set_text(IconLayer,"F");} //violent storm
          else if (OWMCode ==962){text_layer_set_text(IconLayer,"F");} //hurricane         
 
 }
  //day icons
  else {
              if (OWMCode ==200){text_layer_set_text(IconLayer,"O");} //thunderstorm with light rain
          else if (OWMCode ==201){text_layer_set_text(IconLayer,"O");} //thunderstorm with rain
          else if (OWMCode ==202){text_layer_set_text(IconLayer,"Z");} //thunderstorm with heavy rain
          else if (OWMCode ==210){text_layer_set_text(IconLayer,"O");} //light thunderstorm
          else if (OWMCode ==211){text_layer_set_text(IconLayer,"O");} //thunderstorm
          else if (OWMCode ==212){text_layer_set_text(IconLayer,"Z");} //heavy thunderstorm
          else if (OWMCode ==221){text_layer_set_text(IconLayer,"O");} //ragged thunderstorm
          else if (OWMCode ==230){text_layer_set_text(IconLayer,"O");} //thunderstorm with light drizzle
          else if (OWMCode ==231){text_layer_set_text(IconLayer,"O");} //thunderstorm with drizzle
          else if (OWMCode ==232){text_layer_set_text(IconLayer,"Z");} //thunderstorm with heavy drizzle
          else if (OWMCode ==300){text_layer_set_text(IconLayer,"Q");} //light intensity drizzle
          else if (OWMCode ==301){text_layer_set_text(IconLayer,"Q");} //drizzle
          else if (OWMCode ==302){text_layer_set_text(IconLayer,"R");} //heavy intensity drizzle
          else if (OWMCode ==310){text_layer_set_text(IconLayer,"Q");} //light intensity drizzle rain
          else if (OWMCode ==311){text_layer_set_text(IconLayer,"Q");} //drizzle rain
          else if (OWMCode ==312){text_layer_set_text(IconLayer,"R");} //heavy intensity drizzle rain
          else if (OWMCode ==313){text_layer_set_text(IconLayer,"Q");} //shower rain and drizzle
          else if (OWMCode ==314){text_layer_set_text(IconLayer,"R");} //heavy shower rain and drizzle
          else if (OWMCode ==321){text_layer_set_text(IconLayer,"Q");} //shower drizzle
          else if (OWMCode ==500){text_layer_set_text(IconLayer,"Q");} //light rain
          else if (OWMCode ==501){text_layer_set_text(IconLayer,"Q");} //moderate rain
          else if (OWMCode ==502){text_layer_set_text(IconLayer,"R");} //heavy intensity rain
          else if (OWMCode ==503){text_layer_set_text(IconLayer,"R");} //very heavy rain
          else if (OWMCode ==504){text_layer_set_text(IconLayer,"R");} //extreme rain
          else if (OWMCode ==511){text_layer_set_text(IconLayer,"T");} //freezing rain
          else if (OWMCode ==520){text_layer_set_text(IconLayer,"Q");} //light intensity shower rain
          else if (OWMCode ==521){text_layer_set_text(IconLayer,"Q");} //shower rain
          else if (OWMCode ==522){text_layer_set_text(IconLayer,"R");} //heavy intensity shower rain
          else if (OWMCode ==531){text_layer_set_text(IconLayer,"Q");} //ragged shower rain
          else if (OWMCode ==600){text_layer_set_text(IconLayer,"U");} //light snow
          else if (OWMCode ==601){text_layer_set_text(IconLayer,"U");} //snow
          else if (OWMCode ==602){text_layer_set_text(IconLayer,"W");} //heavy snow
          else if (OWMCode ==611){text_layer_set_text(IconLayer,"U");} //sleet
          else if (OWMCode ==612){text_layer_set_text(IconLayer,"U");} //shower sleet
          else if (OWMCode ==615){text_layer_set_text(IconLayer,"U");} //light rain and snow
          else if (OWMCode ==616){text_layer_set_text(IconLayer,"U");} //rain and snow
          else if (OWMCode ==620){text_layer_set_text(IconLayer,"U");} //light shower snow
          else if (OWMCode ==621){text_layer_set_text(IconLayer,"U");} //shower snow
          else if (OWMCode ==622){text_layer_set_text(IconLayer,"W");} //heavy shower snow
          else if (OWMCode ==701){text_layer_set_text(IconLayer,"M");} //mist
          else if (OWMCode ==711){text_layer_set_text(IconLayer,"M");} //smoke
          else if (OWMCode ==721){text_layer_set_text(IconLayer,"E");} //haze
          else if (OWMCode ==731){text_layer_set_text(IconLayer,"E");} //sand, dust whirls
          else if (OWMCode ==741){text_layer_set_text(IconLayer,"M");} //fog
          else if (OWMCode ==751){text_layer_set_text(IconLayer,"E");} //sand
          else if (OWMCode ==761){text_layer_set_text(IconLayer,"E");} //dust
          else if (OWMCode ==762){text_layer_set_text(IconLayer,"M");} //volcanic ash
          else if (OWMCode ==771){text_layer_set_text(IconLayer,"E");} //squalls
          else if (OWMCode ==781){text_layer_set_text(IconLayer,"E");} //tornado
          else if (OWMCode ==800){text_layer_set_text(IconLayer,"B");} //clear sky
          else if (OWMCode ==801){text_layer_set_text(IconLayer,"H");} //few clouds
          else if (OWMCode ==802){text_layer_set_text(IconLayer,"H");} //scattered clouds
          else if (OWMCode ==803){text_layer_set_text(IconLayer,"H");} //broken clouds
          else if (OWMCode ==804){text_layer_set_text(IconLayer,"H");} //overcast clouds
          else if (OWMCode ==900){text_layer_set_text(IconLayer,")");} //tornado
          else if (OWMCode ==901){text_layer_set_text(IconLayer,")");} //tropical storm
          else if (OWMCode ==902){text_layer_set_text(IconLayer,")");} //hurricane
          else if (OWMCode ==903){text_layer_set_text(IconLayer,"T");} //cold
          else if (OWMCode ==904){text_layer_set_text(IconLayer,"B");} //hot
          else if (OWMCode ==905){text_layer_set_text(IconLayer,"F");} //windy
          else if (OWMCode ==906){text_layer_set_text(IconLayer,"X");} //hail
          else if (OWMCode ==951){text_layer_set_text(IconLayer,"A");} //calm
          else if (OWMCode ==952){text_layer_set_text(IconLayer,"F");} //light breeze
          else if (OWMCode ==953){text_layer_set_text(IconLayer,"F");} //gentle breeze
          else if (OWMCode ==954){text_layer_set_text(IconLayer,"F");} //moderate breeze
          else if (OWMCode ==955){text_layer_set_text(IconLayer,"F");} //fresh breeze
          else if (OWMCode ==956){text_layer_set_text(IconLayer,"F");} //strong breeze
          else if (OWMCode ==957){text_layer_set_text(IconLayer,"F");} //high wind, near gale
          else if (OWMCode ==958){text_layer_set_text(IconLayer,"F");} //gale
          else if (OWMCode ==959){text_layer_set_text(IconLayer,"F");} //severe gale
          else if (OWMCode ==960){text_layer_set_text(IconLayer,"F");} //storm
          else if (OWMCode ==961){text_layer_set_text(IconLayer,"F");} //violent storm
          else if (OWMCode ==962){text_layer_set_text(IconLayer,"F");} //hurricane  
  }
  }


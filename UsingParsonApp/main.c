/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수// parson 사용
  --------------------------------------------------------------------------------
  first created - 2020.02.12
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parson.h"


void write_JSON(void);
int read_Jason(void);

// 메인함수
int read_Jason(void) 
{
    JSON_Value* rootValue;
    JSON_Object* rootObject;

    rootValue = json_parse_file("package.json");
    rootObject = json_value_get_object(rootValue);

    printf("name : %s\n", json_object_dotget_string(rootObject, "name"));

    /*printf("version : %d\n", (int)json_object_dotget_number(rootObject, "version"));
    printf("repo : %d min\n", (int)json_object_dotget_number(rootObject, "repo"));*/

    printf("version : %s\n", json_object_dotget_string(rootObject, "version"));
    printf("repo : %s\n", json_object_dotget_string(rootObject, "repo"));
    printf("description : %s\n", json_object_dotget_string(rootObject, "description"));
    JSON_Array* array = json_object_get_array(rootObject, "keywords");
    for (int i = 0; i < json_array_get_count(array); i++) { // 배열 요소 개수 반복
        printf("keywords : %s\n", json_array_get_string(array, i)); // 배열에 인덱스 지정, 문자열 리턴
    }
    printf("license : %s\n", json_object_get_string(rootObject, "license"));
    printf("temp : %.1lf\n", json_object_get_number(rootObject, "temp"));

    printf("bool : %s\n", (json_object_get_boolean(rootObject, "bool") == 1) ? "true" : "false");

	
}
int main(void)
{
    write_JSON();

    system("pause");
    return EXIT_SUCCESS;
}

void write_JSON(void)
{
    JSON_Value* rootValue;
    JSON_Object* rootObject;

    rootValue = json_value_init_object();
    rootObject = json_value_get_object(rootValue);

    json_object_set_string(rootObject, "Title", "interstellar");
    json_object_set_number(rootObject, "year", 2014);
    json_object_set_number(rootObject, "runtime", 169);
    json_object_set_string(rootObject, "Genre", "Sci-Fi");
    json_object_set_string(rootObject, "Director", "Christopher Nolan");
    
    json_object_set_value(rootObject, "Actors",json_value_init_array());
    JSON_Array* actors = json_object_get_array(rootObject, "Actors");

    json_array_append_string(actors, "Matthew McConaughey");
    json_array_append_string(actors, "Matthew McConaughey1");
    json_array_append_string(actors, "Matthew McConaughey2");
    json_array_append_string(actors, "Matthew McConaughey3");
    json_array_append_string(actors, "Matthew McConaughey4");
    json_array_append_string(actors, "Matthew McConaughey5");

    json_object_set_boolean(rootObject, "korearelease", 1);

    json_serialize_to_file_pretty(rootValue, "saved.json");
    json_value_free(rootValue);
}

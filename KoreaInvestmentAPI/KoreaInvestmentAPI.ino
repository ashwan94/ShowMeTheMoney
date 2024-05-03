CURL *curl;
CURLcode res;
curl = curl_easy_init();
if(curl) {
  curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
  curl_easy_setopt(curl, CURLOPT_URL, "https://openapi.koreainvestment.com:9443/uapi/domestic-stock/v1/quotations/inquire-price?fid_cond_mrkt_div_code=J&fid_input_iscd=071280");
  curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
  curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
  struct curl_slist *headers = NULL;
  headers = curl_slist_append(headers, "content-type: application/json");
  headers = curl_slist_append(headers, "authorization: Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzUxMiJ9.eyJzdWIiOiJ0b2tlbiIsImF1ZCI6IjU3OTQxZjAwLWRlM2EtNDYxMy04MDFhLWJkNDY2ZmUyZmQxMSIsInByZHRfY2QiOiIiLCJpc3MiOiJ1bm9ndyIsImV4cCI6MTcxNDYzMTIwMywiaWF0IjoxNzE0NTQ0ODAzLCJqdGkiOiJQUzdWeVl4ZzlqRVY2Uk1TeVpyUlhzcTJrQlRWdEZ2RXR0bnQifQ.eX7ZS9oAtF1k_ZhfHcUk8SxmGCR4gvZb_qZtv0u4UGQEwHq74y66nwhW53Xob5lob2BX-Rt8fNeHwAOvQr-ZGw");
  headers = curl_slist_append(headers, "appkey: PS7VyYxg9jEV6RMSyZrRXsq2kBTVtFvEttnt");
  headers = curl_slist_append(headers, "appsecret: nPIWnICK6ret55v7wvtTrArcvGXbj5FpHmpyOYUHEzIPc7v6ziCol2Frh2xUK/8Fx6R9pRhkeBvdE+CTyCN354OVw8F6lILu8sV6FQT+fE5E4uPrDzeG1HGCFfjytGMUr7cnxQn1QAxJF88J0CBkb56aySSx89utq0tUrWMVbuXfsaGDwtA=");
  headers = curl_slist_append(headers, "tr_id: FHKST01010100");
  curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
  const char *data = "";
  curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
  res = curl_easy_perform(curl);
  curl_slist_free_all(headers);
}
curl_easy_cleanup(curl);

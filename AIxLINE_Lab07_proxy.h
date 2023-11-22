//----------------------這裡是主頁面--------------------
static const char mainPage[] PROGMEM = u8R"(
<!DOCTYPE html>
<html>

<head>
    <script>
         // 請填入你的 GitHub 使用者名稱
        var username = "cplooo";

        url = "https://" + username + ".github.io/FM611A/door_lock";
        window.location.href = url;
    </script>
</head>

<body></body>

</html>
)";

//----------------------這裡是錯誤路徑頁面--------------------
static const char errorPage[] PROGMEM= u8R"(

)";
  
static const char settingPage[] PROGMEM= u8R"(

)";

//---------勿刪 (讓網頁資料儲存在程式區以節省記憶體)------------
#define WEBPAGE_IN_PROGMEM


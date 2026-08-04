$path = 'source/ClusterForge_Phase2/src/common.cpp'
$text = Get-Content $path -Raw
$text = $text.Replace('#include <openssl/rand.h>', "#include <openssl/rand.h>`r`n`r`n#include <boost/system/error_code.hpp>")
$text = $text.Replace('    json::error_code ec;', '    boost::system::error_code ec;')
Set-Content -Path $path -Value $text -NoNewline

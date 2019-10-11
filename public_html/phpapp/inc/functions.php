<?php
function get_page_content($id) {
    if (file_exist($id.'html'))
        include($id.'.html');
    else
        include('404')
}
void get_page_content(string id)
def get_page_content(id):
?>

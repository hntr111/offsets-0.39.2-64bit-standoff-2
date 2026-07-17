https://t.me/AcademicDLC
namespace offsets {

    namespace base {

        inline uint64_t player_manager()    { return oxorany(180740496); }

    }

    namespace manager {

        inline int ptr1()       { return oxorany(0x90); }

        inline int ptr2()       { return oxorany(0x10); }

        inline int ptr3()       { return oxorany(0x0); }

       

       

        inline int local()      { return oxorany(0x70); }

        inline int list()       { return oxorany(0x28); }

        inline int list_size()  { return oxorany(0x20); }

    }

    namespace list {

        inline int buffer()     { return oxorany(0x18); }

        inline int entry()      { return oxorany(0x30); }

        inline int stride()     { return oxorany(0x18); }

    }

    namespace player {

    inline int team()                   { return oxorany(0x79); }

    inline int movement_controller()    { return oxorany(0x98); }

    inline int main_camera()            { return oxorany(0xE8); }

    inline int main_camera_holder()     { return oxorany(0x28); }

   

    inline int photon_player()          { return oxorany(0x160); }

   

    inline int weaponry_controller()    { return oxorany(0x88); }

    inline int character_view()         { return oxorany(0x48); }

}

    namespace weapon {

        inline int controller()       { return oxorany(0xA0); }

        inline int parameters()       { return oxorany(0xA8); }

        inline int id()               { return oxorany(0x18); }

        inline int gun_parameters()   { return oxorany(0x160); }

    }

    namespace transform {

        inline int data()       { return oxorany(0xB0); }

        inline int position()   { return oxorany(0x44); }

    }

    namespace camera {

        inline int transform()  { return oxorany(0x20); }

        inline int ptr()        { return oxorany(0x10); }

        inline int matrix()     { return oxorany(0xF0); }

    }

    namespace photon {

        inline int name()               { return oxorany(0x20); }

        inline int properties()         { return oxorany(0x38); }

        inline int properties_count()   { return oxorany(0x20); }

        inline int properties_list()    { return oxorany(0x18); }

        inline int prop_key()           { return oxorany(0x28); }

        inline int prop_value()         { return oxorany(0x30); }

        inline int prop_stride()        { return oxorany(0x18); }

        inline int value_data()         { return oxorany(0x10); }

    }

   

   

    namespace skeleton {

       

        inline int biped_map()          { return oxorany(0x48); }

       

       

        inline int head()                { return oxorany(0x20); }

        inline int neck()                { return oxorany(0x28); }

        inline int spine()               { return oxorany(0x30); }

        inline int spine1()              { return oxorany(0x38); }

        inline int spine2()              { return oxorany(0x40); }

        inline int left_shoulder()       { return oxorany(0x48); }

        inline int left_upperarm()       { return oxorany(0x50); }

        inline int left_forearm()        { return oxorany(0x58); }

        inline int left_hand()           { return oxorany(0x60); }

        inline int right_shoulder()      { return oxorany(0x68); }

        inline int right_upperarm()      { return oxorany(0x70); }

        inline int right_forearm()       { return oxorany(0x78); }

        inline int right_hand()          { return oxorany(0x80); }

        inline int hip()                 { return oxorany(0x88); }

        inline int left_upleg()          { return oxorany(0x90); }

        inline int left_leg()            { return oxorany(0x98); }

        inline int left_foot()           { return oxorany(0xA0); }

        inline int left_toebase()        { return oxorany(0xA8); }

        inline int right_upleg()         { return oxorany(0xB0); }

        inline int right_leg()           { return oxorany(0xB8); }

        inline int right_foot()          { return oxorany(0xC0); }

        inline int right_toebase()       { return oxorany(0xC8); }

       

       

        inline int transform_object()    { return oxorany(0x10); }

        inline int matrix_ptr()          { return oxorany(0x28); }

        inline int index()               { return oxorany(0x30); }

        inline int matrix_list()         { return oxorany(0x18); }

        inline int matrix_indices()      { return oxorany(0x20); }

    }

   

namespace movement {

    inline int translation_data() { return oxorany(0xB0); }

}



namespace aim {

    inline int aim_controller()     { return oxorany(0x80); }

    inline int aiming_data()        { return oxorany(0x90); }

    inline int aim_pitch()          { return oxorany(0x18); }

    inline int aim_yaw()            { return oxorany(0x1C); }

    inline int aim_pitch_target()   { return oxorany(0x24); }

    inline int aim_yaw_target()     { return oxorany(0x28); }

    inline int aim_camera_transform() { return oxorany(0xC0); }

    inline int occlusion_controller() { return oxorany(0xB8); }

}

}


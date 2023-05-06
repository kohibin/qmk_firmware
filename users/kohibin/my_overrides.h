//Shft+BSPC=DEL
//const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t rparen_key_override = ko_make_basic(MOD_MASK_SHIFT, SG_0, S(KC_9));
const key_override_t lparen_key_override = ko_make_basic(MOD_MASK_SHIFT, SG_9, S(KC_8));
const key_override_t eitqut_key_override = ko_make_basic(MOD_MASK_SHIFT, SG_8, S(KC_7));
const key_override_t svnamp_key_override = ko_make_basic(MOD_MASK_SHIFT, SG_7, S(KC_6));

const key_override_t altf_key_override = ko_make_basic(MOD_MASK_ALT, SG_F, A(KC_TAB));
const key_override_t altr_key_override = ko_make_basic(MOD_MASK_ALT, SG_R, S(A(KC_TAB)));
const key_override_t altv_key_override = ko_make_basic(MOD_MASK_ALT, SG_V, C(KC_V));
const key_override_t altc_key_override = ko_make_basic(MOD_MASK_ALT, SG_C, C(KC_C));
const key_override_t alt4_key_override = ko_make_basic(MOD_MASK_ALT, SG_4, A(KC_F4));
// const key_override_t ctlspc_key_override = ko_make_basic(MOD_MASK_CTRL, SG_SPC1, C(KC_BSPC));
// const key_override_t ctlsp2_key_override = ko_make_basic(MOD_MASK_CTRL, SG_SPC2, C(KC_BSPC));
//const key_override_t sftspc_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_7, S(KC_6));

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
//    &delete_key_override,
    &rparen_key_override,
    &lparen_key_override,
    &eitqut_key_override,
    &svnamp_key_override,
    &altf_key_override,
    &altr_key_override,
    &altv_key_override,
    &altc_key_override,
    &alt4_key_override,
//    &ctlspc_key_override,
//    &ctlsp2_key_override,f
    NULL // Null terminate the array of overrides!!!!!!!    
};

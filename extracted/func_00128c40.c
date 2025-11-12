void func_00128c40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00128c40: addiu $sp, $sp, -0x10
    func_00128c40();  // 0x128be8                                // 0x00128c4c: jal 0x128be8
    /* nop */                                                   // 0x00128c50: nop 
    if (s0 == 0) goto label_0x128cbc;                           // 0x00128c5c: beqz $s0, 0x128cbc
    a1 = 0x100;                                                 // 0x00128c60: addiu $a1, $zero, 0x100
    func_001300e0();  // 0x130098                                // 0x00128c64: jal 0x130098
    /* nop */                                                   // 0x00128c68: nop 
    v1 = 1;                                                     // 0x00128c6c: addiu $v1, $zero, 1
    a0 = 0x22 << 16;                                            // 0x00128c70: lui $a0, 0x22
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00128c74: sw $v0, 4($s0)
    if (v0 != 0) goto label_0x128c90;                           // 0x00128c78: bnez $v0, 0x128c90
    a0 = &str_00222700;  // "E9081901:illigal parameter fname=null.(ADXF_Open)" // 0x00128c7c: addiu $a0, $a0, 0x2700
    func_00127de8();  // 0x127d90                                // 0x00128c80: jal 0x127d90
    /* nop */                                                   // 0x00128c84: nop 
    goto label_0x128cbc;                                        // 0x00128c88: b 0x128cbc
label_0x128c90:
    v0 = 0x200;                                                 // 0x00128c90: addiu $v0, $zero, 0x200
    *(uint8_t*)(s0) = v1;                                       // 0x00128c94: sb $v1, 0($s0)
    *(uint8_t*)((s0) + 1) = v1;                                 // 0x00128c98: sb $v1, 1($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x00128c9c: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x00128ca0: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x00128ca4: sw $zero, 0x20($s0)
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x00128ca8: sb $zero, 2($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00128cac: sw $zero, 8($s0)
    *(uint8_t*)((s0) + 3) = 0;                                  // 0x00128cb0: sb $zero, 3($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x00128cb4: sw $v0, 0x2c($s0)
label_0x128cbc:
    return;                                                     // 0x00128cc4: jr $ra
    sp = sp + 0x10;                                             // 0x00128cc8: addiu $sp, $sp, 0x10
}
void func_0015cf98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_20, local_21, local_34, local_38;
    uint32_t local_4, local_40, local_48, local_4c, local_8, local_c;
    
    sp = sp + -0x90;                                            // 0x0015cf98: addiu $sp, $sp, -0x90
    if (s1 == 0) goto label_0x15cfc8;                           // 0x0015cfb8: beqz $s1, 0x15cfc8
    if (s2 != 0) goto label_0x15cfe0;                           // 0x0015cfc0: bnez $s2, 0x15cfe0
    /* nop */                                                   // 0x0015cfc4: nop 
label_0x15cfc8:
    a0 = 0x22 << 16;                                            // 0x0015cfc8: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015cfcc: jal 0x163410
    a0 = &str_002273f0;  // "E204162: mwPlyGetHdrInf(): bufsize error" // 0x0015cfd0: addiu $a0, $a0, 0x73f0
    goto label_0x15d114;                                        // 0x0015cfd4: b 0x15d114
    /* nop */                                                   // 0x0015cfdc: nop 
label_0x15cfe0:
    if (s0 > 0) goto label_0x15d000;                            // 0x0015cfe0: bgtzl $s0, 0x15d000
    a0 = 0x22 << 16;                                            // 0x0015cfe8: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015cfec: jal 0x163410
    a0 = &str_00227418;  // "E2053001 MWSFD_Malloc: cnt over."  // 0x0015cff0: addiu $a0, $a0, 0x7418
    goto label_0x15d114;                                        // 0x0015cff4: b 0x15d114
    /* nop */                                                   // 0x0015cffc: nop 
label_0x15d000:
    func_00107c70();  // 107c70                                // 0x0015d004: jal 0x107c70
    a2 = 0x20;                                                  // 0x0015d008: addiu $a2, $zero, 0x20
    s3 = sp + 0x20;                                             // 0x0015d010: addiu $s3, $sp, 0x20
    func_00167ea8();  // 167ea8                                // 0x0015d018: jal 0x167ea8
    v0 = local_20;                                              // 0x0015d020: lb $v0, 0x20($sp)
    if (v0 == 0) goto label_0x15d034;                           // 0x0015d024: beqz $v0, 0x15d034
    v0 = local_21;                                              // 0x0015d028: lb $v0, 0x21($sp)
    if (v0 != 0) goto label_0x15d080;                           // 0x0015d02c: bnez $v0, 0x15d080
    /* nop */                                                   // 0x0015d030: nop 
label_0x15d034:
    goto label_0x15d110;                                        // 0x0015d074: b 0x15d110
    *(uint32_t*)(s2) = 0;                                       // 0x0015d078: sw $zero, 0($s2)
    /* nop */                                                   // 0x0015d07c: nop 
label_0x15d080:
    func_0015d130();  // 15d130                                // 0x0015d080: jal 0x15d130
    v1 = local_38;                                              // 0x0015d08c: lw $v1, 0x38($sp)
    t2 = local_34;                                              // 0x0015d094: lw $t2, 0x34($sp)
    a3 = local_40;                                              // 0x0015d09c: lw $a3, 0x40($sp)
    t0 = local_4c;                                              // 0x0015d0a0: lw $t0, 0x4c($sp)
    t1 = local_48;                                              // 0x0015d0a4: lb $t1, 0x48($sp)
    local_c = v1;                                               // 0x0015d0a8: sw $v1, 0xc($sp)
    local_4 = v0;                                               // 0x0015d0ac: sw $v0, 4($sp)
    local_8 = t2;                                               // 0x0015d0b0: sw $t2, 8($sp)
    local_10 = a3;                                              // 0x0015d0b4: sw $a3, 0x10($sp)
    local_14 = t0;                                              // 0x0015d0b8: sw $t0, 0x14($sp)
    func_0015e260();  // 15e260                                // 0x0015d0bc: jal 0x15e260
    local_18 = t1;                                              // 0x0015d0c0: sw $t1, 0x18($sp)
    func_0015d180();  // 15d180                                // 0x0015d0c4: jal 0x15d180
    local_0 = v0;                                               // 0x0015d0cc: sw $v0, 0($sp)
label_0x15d110:
label_0x15d114:
    return;                                                     // 0x0015d124: jr $ra
    sp = sp + 0x90;                                             // 0x0015d128: addiu $sp, $sp, 0x90
}
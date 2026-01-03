void func_00135d38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_130;
    
    sp = sp + -0x280;                                           // 0x00135d38: addiu $sp, $sp, -0x280
    if (s0 != 0) goto label_0x135d68;                           // 0x00135d50: bnez $s0, 0x135d68
    a0 = 0x22 << 16;                                            // 0x00135d58: lui $a0, 0x22
    goto label_0x135de0;                                        // 0x00135d5c: b 0x135de0
    a0 = &str_00224408;  // "cvFsGetFileSizeEx #2:illegal device name" // 0x00135d60: addiu $a0, $a0, 0x4408
    /* nop */                                                   // 0x00135d64: nop 
label_0x135d68:
    s1 = sp + 0x130;                                            // 0x00135d68: addiu $s1, $sp, 0x130
    func_00135790();  // 135790                                // 0x00135d74: jal 0x135790
    v0 = local_130;                                             // 0x00135d7c: lb $v0, 0x130($sp)
    if (v0 != 0) goto label_0x135d98;                           // 0x00135d80: bnez $v0, 0x135d98
    a0 = 0x22 << 16;                                            // 0x00135d88: lui $a0, 0x22
    goto label_0x135de0;                                        // 0x00135d8c: b 0x135de0
    a0 = &str_00224408;  // "cvFsGetFileSizeEx #2:illegal device name" // 0x00135d90: addiu $a0, $a0, 0x4408
    /* nop */                                                   // 0x00135d94: nop 
label_0x135d98:
    func_00135548();  // 135548                                // 0x00135d9c: jal 0x135548
    /* bnezl $s0, 0x135dc0 */                                   // 0x00135da8: bnezl $s0, 0x135dc0
    v0 = *(int32_t*)((s0) + 0x5c);                              // 0x00135dac: lw $v0, 0x5c($s0)
    a0 = 0x22 << 16;                                            // 0x00135db0: lui $a0, 0x22
    func_00134ec0();  // 134ec0                                // 0x00135db4: jal 0x134ec0
    a0 = &str_00224460;  // "cvFsGetFileSizeEx #4:vtbl error"   // 0x00135db8: addiu $a0, $a0, 0x4460
    v0 = *(int32_t*)((s0) + 0x5c);                              // 0x00135dbc: lw $v0, 0x5c($s0)
    if (v0 == 0) goto label_0x135dd8;                           // 0x00135dc0: beqz $v0, 0x135dd8
    /* call function at address in v0 */                        // 0x00135dc8: jalr $v0
    goto label_0x135df0;                                        // 0x00135dd0: b 0x135df0
label_0x135dd8:
    a0 = 0x22 << 16;                                            // 0x00135dd8: lui $a0, 0x22
    a0 = &str_00224488;  // "cvFsGetFileSizeByHndl #1:illegal file handle" // 0x00135ddc: addiu $a0, $a0, 0x4488
label_0x135de0:
    func_00134ec0();  // 134ec0                                // 0x00135de0: jal 0x134ec0
    /* nop */                                                   // 0x00135de4: nop 
label_0x135df0:
    return;                                                     // 0x00135dfc: jr $ra
    sp = sp + 0x280;                                            // 0x00135e00: addiu $sp, $sp, 0x280
}
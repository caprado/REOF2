void func_00136b98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x40;                                            // 0x00136b98: addiu $sp, $sp, -0x40
    if (a0 != 0) goto label_0x136bc8;                           // 0x00136ba8: bnez $a0, 0x136bc8
    a0 = 0x22 << 16;                                            // 0x00136bb0: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00136bb4: jal 0x134ec0
    a0 = &str_00224be0;  // "cvFsSetDefVol #2:illegal volume name" // 0x00136bb8: addiu $a0, $a0, 0x4be0
    goto label_0x136c48;                                        // 0x00136bbc: b 0x136c48
    /* nop */                                                   // 0x00136bc4: nop 
label_0x136bc8:
    if (s0 != 0) goto label_0x136be8;                           // 0x00136bc8: bnez $s0, 0x136be8
    /* nop */                                                   // 0x00136bcc: nop 
    a0 = 0x22 << 16;                                            // 0x00136bd0: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00136bd4: jal 0x134ec0
    a0 = &str_00224c08;  // "cvFsSetDefVol #3:device not found" // 0x00136bd8: addiu $a0, $a0, 0x4c08
    goto label_0x136c48;                                        // 0x00136bdc: b 0x136c48
    /* nop */                                                   // 0x00136be4: nop 
label_0x136be8:
    func_001352b8();  // 0x135220                                // 0x00136be8: jal 0x135220
    /* nop */                                                   // 0x00136bec: nop 
    if (s1 != 0) goto label_0x136c18;                           // 0x00136bfc: bnez $s1, 0x136c18
    a2 = 0x14;                                                  // 0x00136c00: addiu $a2, $zero, 0x14
    a0 = 0x22 << 16;                                            // 0x00136c04: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00136c08: jal 0x134ec0
    a0 = &str_00224c30;  // "%s:%s"                             // 0x00136c0c: addiu $a0, $a0, 0x4c30
    goto label_0x136c48;                                        // 0x00136c10: b 0x136c48
label_0x136c18:
    func_00107d30();  // 0x107c70                                // 0x00136c18: jal 0x107c70
    /* nop */                                                   // 0x00136c1c: nop 
    a1 = 6;                                                     // 0x00136c20: addiu $a1, $zero, 6
    local_4 = s0;                                               // 0x00136c24: sw $s0, 4($sp)
    v0 = *(int32_t*)((s1) + 0x60);                              // 0x00136c30: lw $v0, 0x60($s1)
    if (v0 == 0) goto label_0x136c44;                           // 0x00136c34: beqz $v0, 0x136c44
    /* call function at address in v0 */                        // 0x00136c3c: jalr $v0
    /* nop */                                                   // 0x00136c40: nop 
label_0x136c44:
label_0x136c48:
    return;                                                     // 0x00136c50: jr $ra
    sp = sp + 0x40;                                             // 0x00136c54: addiu $sp, $sp, 0x40
}
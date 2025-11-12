void func_00135c78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_130;
    
    sp = sp + -0x280;                                           // 0x00135c78: addiu $sp, $sp, -0x280
    if (s0 != 0) goto label_0x135ca0;                           // 0x00135c88: bnez $s0, 0x135ca0
    a0 = 0x22 << 16;                                            // 0x00135c90: lui $a0, 0x22
    goto label_0x135d14;                                        // 0x00135c94: b 0x135d14
    a0 = &str_00224370;  // "cvFsGetFileSize #2:illegal device name" // 0x00135c98: addiu $a0, $a0, 0x4370
    /* nop */                                                   // 0x00135c9c: nop 
label_0x135ca0:
    s1 = sp + 0x130;                                            // 0x00135ca0: addiu $s1, $sp, 0x130
    func_001358d8();  // 0x135790                                // 0x00135cac: jal 0x135790
    v0 = local_130;                                             // 0x00135cb4: lb $v0, 0x130($sp)
    if (v0 != 0) goto label_0x135cd0;                           // 0x00135cb8: bnez $v0, 0x135cd0
    a0 = 0x22 << 16;                                            // 0x00135cc0: lui $a0, 0x22
    goto label_0x135d14;                                        // 0x00135cc4: b 0x135d14
    a0 = &str_00224370;  // "cvFsGetFileSize #2:illegal device name" // 0x00135cc8: addiu $a0, $a0, 0x4370
    /* nop */                                                   // 0x00135ccc: nop 
label_0x135cd0:
    func_001355f0();  // 0x135548                                // 0x00135cd4: jal 0x135548
    /* bnezl $s0, 0x135cf8 */                                   // 0x00135ce0: bnezl $s0, 0x135cf8
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00135ce4: lw $v0, 8($s0)
    a0 = 0x22 << 16;                                            // 0x00135ce8: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00135cec: jal 0x134ec0
    a0 = &str_002243c0;  // "cvFsGetFileSize #4:vtbl error"     // 0x00135cf0: addiu $a0, $a0, 0x43c0
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00135cf4: lw $v0, 8($s0)
    /* beqzl $v0, 0x135d10 */                                   // 0x00135cf8: beqzl $v0, 0x135d10
    a0 = 0x22 << 16;                                            // 0x00135cfc: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00135d00: jalr $v0
    goto label_0x135d24;                                        // 0x00135d08: b 0x135d24
    a0 = &str_002243e8;  // "cvFsGetFileSizeEx #1:illegal file name" // 0x00135d10: addiu $a0, $a0, 0x43e8
label_0x135d14:
    func_00134fb0();  // 0x134ec0                                // 0x00135d14: jal 0x134ec0
    /* nop */                                                   // 0x00135d18: nop 
label_0x135d24:
    return;                                                     // 0x00135d2c: jr $ra
    sp = sp + 0x280;                                            // 0x00135d30: addiu $sp, $sp, 0x280
}
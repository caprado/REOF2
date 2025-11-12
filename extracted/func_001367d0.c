void func_001367d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001367d0: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1367f8;                           // 0x001367dc: bnez $a0, 0x1367f8
    a0 = 0x22 << 16;                                            // 0x001367e4: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x001367e8: jal 0x134ec0
    a0 = &str_00224980;  // "cvFsOptFn2 #2:vtbl error"          // 0x001367ec: addiu $a0, $a0, 0x4980
    goto label_0x136824;                                        // 0x001367f0: b 0x136824
label_0x1367f8:
    v0 = str_00224980;  // "cvFsOptFn2 #2:vtbl error"           // 0x001367f8: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x64);                              // 0x001367fc: lw $v0, 0x64($v0)
    /* beqzl $v0, 0x136818 */                                   // 0x00136800: beqzl $v0, 0x136818
    a0 = 0x22 << 16;                                            // 0x00136804: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00136808: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x0013680c: lw $a0, 4($a0)
    goto label_0x136820;                                        // 0x00136810: b 0x136820
    func_00134fb0();  // 0x134ec0                                // 0x00136818: jal 0x134ec0
    a0 = &str_002249a0;  // "cvFsSetCurVolume #1:illegal device name" // 0x0013681c: addiu $a0, $a0, 0x49a0
label_0x136820:
label_0x136824:
    return;                                                     // 0x0013682c: jr $ra
    sp = sp + 0x10;                                             // 0x00136830: addiu $sp, $sp, 0x10
}
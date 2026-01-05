void func_001618d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001618d8: addiu $sp, $sp, -0x20
    v0 = 1 << 16;                                               // 0x001618dc: lui $v0, 1
    v0 = v0 | 0xffff;                                           // 0x001618e8: ori $v0, $v0, 0xffff
    v0 = (v0 < s1) ? 1 : 0;                                     // 0x001618f0: slt $v0, $v0, $s1
    s0 = a0 + 0xf4;                                             // 0x001618fc: addiu $s0, $a0, 0xf4
    if (v0 != 0) goto label_0x161914;                           // 0x00161900: bnez $v0, 0x161914
    a0 = 0x23 << 16;                                            // 0x00161908: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x0016190c: jal 0x163410
    a0 = &str_00228740;  // "SFXINFS"                           // 0x00161910: addiu $a0, $a0, -0x78c0
label_0x161914:
    g_00228838 = s1;  // Global at 0x00228838                   // 0x00161914: sw $s1, 4($s0)
    g_00228834 = s2;  // Global at 0x00228834                   // 0x00161918: sw $s2, 0($s0)
    return;                                                     // 0x0016192c: jr $ra
    sp = sp + 0x20;                                             // 0x00161930: addiu $sp, $sp, 0x20
}
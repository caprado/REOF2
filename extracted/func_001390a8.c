void func_001390a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001390a8: addiu $sp, $sp, -0x20
    v1 = 0x20 << 16;                                            // 0x001390ac: lui $v1, 0x20
    v1 = v1 + 0x2a2c;                                           // 0x001390b4: addiu $v1, $v1, 0x2a2c
    v0 = g_00202a2c;  // Global at 0x00202a2c                   // 0x001390c4: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x001390c8: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x139108;                           // 0x001390cc: bnez $v0, 0x139108
    g_00202a2c = v0;  // Global at 0x00202a2c                   // 0x001390d0: sw $v0, 0($v1)
    v0 = 0x20 << 16;                                            // 0x001390d4: lui $v0, 0x20
    s2 = 1;                                                     // 0x001390d8: addiu $s2, $zero, 1
    s0 = v0 + 0x2a30;                                           // 0x001390dc: addiu $s0, $v0, 0x2a30
    s1 = 7;                                                     // 0x001390e0: addiu $s1, $zero, 7
    /* nop */                                                   // 0x001390e4: nop 
label_0x1390e8:
    v0 = g_00202a30;  // Global at 0x00202a30                   // 0x001390e8: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x139100;                          // 0x001390ec: bnel $v0, $s2, 0x139100
    s1 = s1 + -1;                                               // 0x001390f0: addiu $s1, $s1, -1
    func_00138e38();  // 0x138dd0                                // 0x001390f4: jal 0x138dd0
    s1 = s1 + -1;                                               // 0x001390fc: addiu $s1, $s1, -1
label_0x139100:
    if (s1 >= 0) goto label_0x1390e8;                           // 0x00139100: bgez $s1, 0x1390e8
    s0 = s0 + 0x44;                                             // 0x00139104: addiu $s0, $s0, 0x44
label_0x139108:
    return;                                                     // 0x00139118: jr $ra
    sp = sp + 0x20;                                             // 0x0013911c: addiu $sp, $sp, 0x20
}
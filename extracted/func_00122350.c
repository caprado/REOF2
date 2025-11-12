void func_00122350() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00122350: addiu $sp, $sp, -0x10
    return func_0011f538();  // Tail call                       // 0x0012235c: j 0x11f538
    sp = sp + 0x10;                                             // 0x00122360: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00122364: nop 
    sp = sp + -0x10;                                            // 0x00122368: addiu $sp, $sp, -0x10
    return func_001201a0();  // Tail call                        // 0x00122374: j 0x11f878
    sp = sp + 0x10;                                             // 0x00122378: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012237c: nop 
    sp = sp + -0x10;                                            // 0x00122380: addiu $sp, $sp, -0x10
    return func_0011fe80();  // Tail call                       // 0x0012238c: j 0x11fe80
    sp = sp + 0x10;                                             // 0x00122390: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00122394: nop 
    sp = sp + -0x10;                                            // 0x00122398: addiu $sp, $sp, -0x10
    return func_001205c8();  // Tail call                        // 0x001223a4: j 0x1201a0
    sp = sp + 0x10;                                             // 0x001223a8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001223ac: nop 
    sp = sp + -0x10;                                            // 0x001223b0: addiu $sp, $sp, -0x10
    return func_001207a8();  // Tail call                        // 0x001223bc: j 0x1205c8
    sp = sp + 0x10;                                             // 0x001223c0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001223c4: nop 
    sp = sp + -0x10;                                            // 0x001223c8: addiu $sp, $sp, -0x10
    return func_00120c28();  // Tail call                        // 0x001223d4: j 0x120b58
    sp = sp + 0x10;                                             // 0x001223d8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001223dc: nop 
    sp = sp + -0x10;                                            // 0x001223e0: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x001223e4: lui $v0, 0x1f
    s0 = v0 + 0x1a10;                                           // 0x001223ec: addiu $s0, $v0, 0x1a10
    v0 = g_001f1a10;  // Global at 0x001f1a10                   // 0x001223f0: lw $v0, 0($s0)
    if (v0 != 0) goto label_0x122414;                           // 0x001223f4: bnez $v0, 0x122414
    a0 = 0x1f << 16;                                            // 0x001223fc: lui $a0, 0x1f
    a0 = a0 + 0x1a18;                                           // 0x00122404: addiu $a0, $a0, 0x1a18
    func_00107d30();  // 0x107c70                                // 0x00122408: jal 0x107c70
    a2 = 0x300;                                                 // 0x0012240c: addiu $a2, $zero, 0x300
    v0 = g_001f1a10;  // Global at 0x001f1a10                   // 0x00122410: lw $v0, 0($s0)
label_0x122414:
    v0 = v0 + 1;                                                // 0x00122414: addiu $v0, $v0, 1
    g_001f1a10 = v0;  // Global at 0x001f1a10                   // 0x0012241c: sw $v0, 0($s0)
    return;                                                     // 0x00122424: jr $ra
    sp = sp + 0x10;                                             // 0x00122428: addiu $sp, $sp, 0x10
}
/** @category: graphics/sync @status: complete @author: caprado */
void func_00114770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00114770: addiu $sp, $sp, -0x10
    func_0011d320();  // 11d320                                // 0x00114778: jal 0x11d320
    /* nop */                                                   // 0x0011477c: nop 
    v1 = 0x1000 << 16;                                          // 0x00114780: lui $v1, 0x1000
    a0 = 4;                                                     // 0x00114784: addiu $a0, $zero, 4
    v1 = v1 | 0xf000;                                           // 0x00114788: ori $v1, $v1, 0xf000
    g_10000000 = a0;  // Global at 0x10000000                   // 0x0011478c: sw $a0, 0($v1)
    /* memory sync */                                           // 0x00114790: sync 
    if (v0 == 0) goto label_0x1147a8;                           // 0x00114794: beqz $v0, 0x1147a8
    v1 = 0x1000 << 16;                                          // 0x00114798: lui $v1, 0x1000
    func_0011d378();  // 11d378                                // 0x0011479c: jal 0x11d378
    /* nop */                                                   // 0x001147a0: nop 
    v1 = 0x1000 << 16;                                          // 0x001147a4: lui $v1, 0x1000
label_0x1147a8:
    v1 = v1 | 0xf000;                                           // 0x001147a8: ori $v1, $v1, 0xf000
    /* nop */                                                   // 0x001147ac: nop 
label_0x1147b0:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001147b0: lw $v0, 0($v1)
    v0 = v0 & 4;                                                // 0x001147b4: andi $v0, $v0, 4
    /* nop */                                                   // 0x001147b8: nop 
    /* nop */                                                   // 0x001147bc: nop 
    /* nop */                                                   // 0x001147c0: nop 
    if (v0 == 0) goto label_0x1147b0;                           // 0x001147c4: beqz $v0, 0x1147b0
    /* nop */                                                   // 0x001147c8: nop 
    func_0011d320();  // 11d320                                // 0x001147cc: jal 0x11d320
    /* nop */                                                   // 0x001147d0: nop 
    v1 = 0x1000 << 16;                                          // 0x001147d4: lui $v1, 0x1000
    a0 = 4;                                                     // 0x001147d8: addiu $a0, $zero, 4
    v1 = v1 | 0xf000;                                           // 0x001147dc: ori $v1, $v1, 0xf000
    g_10000000 = a0;  // Global at 0x10000000                   // 0x001147e0: sw $a0, 0($v1)
    /* memory sync */                                           // 0x001147e4: sync 
    if (v0 == 0) goto label_0x1147f8;                           // 0x001147e8: beqz $v0, 0x1147f8
    return func_0011d390();  // Tail call                        // 0x001147f0: j 0x11d378
    sp = sp + 0x10;                                             // 0x001147f4: addiu $sp, $sp, 0x10
label_0x1147f8:
    return;                                                     // 0x001147f8: jr $ra
    sp = sp + 0x10;                                             // 0x001147fc: addiu $sp, $sp, 0x10
}
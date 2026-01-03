void func_001d8780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(uint16_t*)((a0) + 4);                                // 0x001d8780: lhu $v1, 4($a0)
    v0 = *(uint16_t*)(a0);                                      // 0x001d8788: lhu $v0, 0($a0)
    a2 = a0 + 8;                                                // 0x001d8790: addiu $a2, $a0, 8
    *(uint8_t*)(a1) = v0;                                       // 0x001d8794: sb $v0, 0($a1)
    return func_001d8780();  // Tail call                        // 0x001d8798: j 0x1d8490
    *(uint8_t*)((a1) + 1) = v1;                                 // 0x001d879c: sb $v1, 1($a1)
    v1 = *(uint16_t*)((a0) + 4);                                // 0x001d87a0: lhu $v1, 4($a0)
    v0 = *(uint16_t*)(a0);                                      // 0x001d87a8: lhu $v0, 0($a0)
    a3 = a0 + 8;                                                // 0x001d87b4: addiu $a3, $a0, 8
    *(uint8_t*)(a1) = v0;                                       // 0x001d87b8: sb $v0, 0($a1)
    *(uint8_t*)((a1) + 1) = v1;                                 // 0x001d87bc: sb $v1, 1($a1)
    return func_001d8490();  // Tail call                        // 0x001d87c0: j 0x1d82d0
    *(uint8_t*)((a1) + 2) = 0;                                  // 0x001d87c4: sb $zero, 2($a1)
    /* nop */                                                   // 0x001d87c8: nop 
    /* nop */                                                   // 0x001d87cc: nop 
    sp = sp + -0x20;                                            // 0x001d87d0: addiu $sp, $sp, -0x20
    a3 = 0x1f4;                                                 // 0x001d87d4: addiu $a3, $zero, 0x1f4
    func_001d87a0();  // 1d87a0                                // 0x001d87e4: jal 0x1d87a0
    v1 = 2;                                                     // 0x001d87ec: addiu $v1, $zero, 2
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001d87f0: sb $v1, 2($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d87f8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d87fc: jr $ra
    sp = sp + 0x20;                                             // 0x001d8800: addiu $sp, $sp, 0x20
}
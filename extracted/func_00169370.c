void func_00169370() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00169370: addiu $sp, $sp, -0x20
    if (s0 == 0) goto label_0x1693ec;                           // 0x0016938c: beqz $s0, 0x1693ec
    a2 = 0x18 << 16;                                            // 0x00169394: lui $a2, 0x18
    func_001695d8();  // 1695d8                                // 0x00169398: jal 0x1695d8
    a2 = a2 + -0x6590;                                          // 0x0016939c: addiu $a2, $a2, -0x6590
    a2 = 0x18 << 16;                                            // 0x001693a0: lui $a2, 0x18
    *(uint32_t*)(s2) = v0;                                      // 0x001693a4: sw $v0, 0($s2)
    a2 = a2 + -0x6528;                                          // 0x001693a8: addiu $a2, $a2, -0x6528
    func_001695d8();  // 1695d8                                // 0x001693b0: jal 0x1695d8
    a2 = 0x18 << 16;                                            // 0x001693b8: lui $a2, 0x18
    *(uint32_t*)((s2) + 4) = v0;                                // 0x001693bc: sw $v0, 4($s2)
    a2 = a2 + -0x64a8;                                          // 0x001693c0: addiu $a2, $a2, -0x64a8
    func_001695d8();  // 1695d8                                // 0x001693c8: jal 0x1695d8
    a2 = 0x18 << 16;                                            // 0x001693d0: lui $a2, 0x18
    *(uint32_t*)((s2) + 8) = v0;                                // 0x001693d4: sw $v0, 8($s2)
    func_001695d8();  // 1695d8                                // 0x001693e0: jal 0x1695d8
    a2 = a2 + -0x6440;                                          // 0x001693e4: addiu $a2, $a2, -0x6440
    *(uint32_t*)((s2) + 0xc) = v0;                              // 0x001693e8: sw $v0, 0xc($s2)
label_0x1693ec:
    return;                                                     // 0x001693fc: jr $ra
    sp = sp + 0x20;                                             // 0x00169400: addiu $sp, $sp, 0x20
}
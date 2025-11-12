void func_001a2550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a2550: addiu $sp, $sp, -0x30
    v0 = 0x13;                                                  // 0x001a2554: addiu $v0, $zero, 0x13
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a2560: addu.qb $zero, $sp, $s1
    *(uint8_t*)(a1) = v0;                                       // 0x001a256c: sb $v0, 0($a1)
    s0 = a0 + 0xc;                                              // 0x001a2570: addiu $s0, $a0, 0xc
    *(uint8_t*)((a1) + 1) = 0;                                  // 0x001a2574: sb $zero, 1($a1)
    v0 = g_002a0505;  // Global at 0x002a0505                   // 0x001a2578: lw $v0, 4($a0)
    *(uint16_t*)((a1) + 2) = v0;                                // 0x001a257c: sh $v0, 2($a1)
    a0 = 0x2a << 16;                                            // 0x001a2580: lui $a0, 0x2a
    v1 = *(uint16_t*)((a1) + 2);                                // 0x001a2584: lhu $v1, 2($a1)
    a0 = a0 + 0x500;                                            // 0x001a2588: addiu $a0, $a0, 0x500
    v0 = v1 << 1;                                               // 0x001a258c: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x001a2590: addu $v0, $v0, $v1
    func_001899f8();  // 0x1898e0                                // 0x001a2594: jal 0x1898e0
    a1 = v0 << 2;                                               // 0x001a2598: sll $a1, $v0, 2
    goto label_0x1a25e0;                                        // 0x001a25a4: b 0x1a25e0
    *(uint32_t*)((s1) + 4) = a1;                                // 0x001a25a8: sw $a1, 4($s1)
label_0x1a25ac:
    v1 = g_002a050d;  // Global at 0x002a050d                   // 0x001a25ac: lw $v1, 0($s0)
    a0 = a0 + 1;                                                // 0x001a25b0: addiu $a0, $a0, 1
    *(uint32_t*)(a1) = v1;                                      // 0x001a25b4: sw $v1, 0($a1)
    v1 = g_002a0511;  // Global at 0x002a0511                   // 0x001a25b8: lhu $v1, 4($s0)
    *(uint16_t*)((a1) + 4) = v1;                                // 0x001a25bc: sh $v1, 4($a1)
    v1 = g_002a0513;  // Global at 0x002a0513                   // 0x001a25c0: lhu $v1, 6($s0)
    *(uint16_t*)((a1) + 6) = v1;                                // 0x001a25c4: sh $v1, 6($a1)
    v1 = g_002a0515;  // Global at 0x002a0515                   // 0x001a25c8: lhu $v1, 8($s0)
    *(uint16_t*)((a1) + 8) = v1;                                // 0x001a25cc: sh $v1, 8($a1)
    v1 = g_002a0517;  // Global at 0x002a0517                   // 0x001a25d0: lhu $v1, 0xa($s0)
    *(uint16_t*)((a1) + 0xa) = v1;                              // 0x001a25d4: sh $v1, 0xa($a1)
    s0 = s0 + 0xc;                                              // 0x001a25d8: addiu $s0, $s0, 0xc
    a1 = a1 + 0xc;                                              // 0x001a25dc: addiu $a1, $a1, 0xc
label_0x1a25e0:
    v1 = *(uint16_t*)((s1) + 2);                                // 0x001a25e0: lhu $v1, 2($s1)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001a25e4: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1a25ac;                           // 0x001a25e8: bnez $v1, 0x1a25ac
    /* nop */                                                   // 0x001a25ec: nop 
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001a25f0: lw $a0, 4($s1)
    v1 = *(int32_t*)((gp) + -0x6428);                           // 0x001a25f4: lw $v1, -0x6428($gp)
    v1 = a0 - v1;                                               // 0x001a25f8: subu $v1, $a0, $v1
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001a25fc: sw $v1, 4($s1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a2604: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2608: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a260c: jr $ra
    sp = sp + 0x30;                                             // 0x001a2610: addiu $sp, $sp, 0x30
}
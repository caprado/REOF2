void func_001a2490() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a2490: addiu $sp, $sp, -0x30
    v0 = 0x12;                                                  // 0x001a2494: addiu $v0, $zero, 0x12
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a24a0: addu.qb $zero, $sp, $s1
    *(uint8_t*)(a1) = v0;                                       // 0x001a24ac: sb $v0, 0($a1)
    s0 = a0 + 0xc;                                              // 0x001a24b0: addiu $s0, $a0, 0xc
    *(uint8_t*)((a1) + 1) = 0;                                  // 0x001a24b4: sb $zero, 1($a1)
    v0 = g_002a0505;  // Global at 0x002a0505                   // 0x001a24b8: lw $v0, 4($a0)
    *(uint16_t*)((a1) + 2) = v0;                                // 0x001a24bc: sh $v0, 2($a1)
    a0 = 0x2a << 16;                                            // 0x001a24c0: lui $a0, 0x2a
    v0 = *(uint16_t*)((a1) + 2);                                // 0x001a24c4: lhu $v0, 2($a1)
    a0 = a0 + 0x500;                                            // 0x001a24c8: addiu $a0, $a0, 0x500
    func_001899f8();  // 0x1898e0                                // 0x001a24cc: jal 0x1898e0
    a1 = v0 << 3;                                               // 0x001a24d0: sll $a1, $v0, 3
    goto label_0x1a2510;                                        // 0x001a24dc: b 0x1a2510
    *(uint32_t*)((s1) + 4) = a1;                                // 0x001a24e0: sw $a1, 4($s1)
label_0x1a24e4:
    v1 = g_002a050d;  // Global at 0x002a050d                   // 0x001a24e4: lhu $v1, 0($s0)
    a0 = a0 + 1;                                                // 0x001a24e8: addiu $a0, $a0, 1
    *(uint16_t*)(a1) = v1;                                      // 0x001a24ec: sh $v1, 0($a1)
    v1 = g_002a050f;  // Global at 0x002a050f                   // 0x001a24f0: lhu $v1, 2($s0)
    *(uint16_t*)((a1) + 2) = v1;                                // 0x001a24f4: sh $v1, 2($a1)
    v1 = g_002a0511;  // Global at 0x002a0511                   // 0x001a24f8: lhu $v1, 4($s0)
    *(uint16_t*)((a1) + 4) = v1;                                // 0x001a24fc: sh $v1, 4($a1)
    v1 = g_002a0513;  // Global at 0x002a0513                   // 0x001a2500: lhu $v1, 6($s0)
    *(uint16_t*)((a1) + 6) = v1;                                // 0x001a2504: sh $v1, 6($a1)
    s0 = s0 + 8;                                                // 0x001a2508: addiu $s0, $s0, 8
    a1 = a1 + 8;                                                // 0x001a250c: addiu $a1, $a1, 8
label_0x1a2510:
    v1 = *(uint16_t*)((s1) + 2);                                // 0x001a2510: lhu $v1, 2($s1)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001a2514: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1a24e4;                           // 0x001a2518: bnez $v1, 0x1a24e4
    /* nop */                                                   // 0x001a251c: nop 
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001a2520: lw $a0, 4($s1)
    v1 = *(int32_t*)((gp) + -0x6428);                           // 0x001a2524: lw $v1, -0x6428($gp)
    v1 = a0 - v1;                                               // 0x001a2528: subu $v1, $a0, $v1
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001a252c: sw $v1, 4($s1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a2534: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2538: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a253c: jr $ra
    sp = sp + 0x30;                                             // 0x001a2540: addiu $sp, $sp, 0x30
}
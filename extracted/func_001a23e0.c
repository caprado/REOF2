void func_001a23e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a23e0: addiu $sp, $sp, -0x30
    v0 = 0x11;                                                  // 0x001a23e4: addiu $v0, $zero, 0x11
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a23f0: addu.qb $zero, $sp, $s1
    *(uint8_t*)(a1) = v0;                                       // 0x001a23fc: sb $v0, 0($a1)
    s0 = a0 + 0xc;                                              // 0x001a2400: addiu $s0, $a0, 0xc
    *(uint8_t*)((a1) + 1) = 0;                                  // 0x001a2404: sb $zero, 1($a1)
    v0 = g_002a0505;  // Global at 0x002a0505                   // 0x001a2408: lw $v0, 4($a0)
    *(uint16_t*)((a1) + 2) = v0;                                // 0x001a240c: sh $v0, 2($a1)
    a0 = 0x2a << 16;                                            // 0x001a2410: lui $a0, 0x2a
    v0 = *(uint16_t*)((a1) + 2);                                // 0x001a2414: lhu $v0, 2($a1)
    a0 = a0 + 0x500;                                            // 0x001a2418: addiu $a0, $a0, 0x500
    func_001898e0();  // 1898e0                                // 0x001a241c: jal 0x1898e0
    a1 = v0 << 2;                                               // 0x001a2420: sll $a1, $v0, 2
    goto label_0x1a2450;                                        // 0x001a242c: b 0x1a2450
    *(uint32_t*)((s1) + 4) = a1;                                // 0x001a2430: sw $a1, 4($s1)
label_0x1a2434:
    v1 = g_002a050d;  // Global at 0x002a050d                   // 0x001a2434: lhu $v1, 0($s0)
    a0 = a0 + 1;                                                // 0x001a2438: addiu $a0, $a0, 1
    *(uint16_t*)(a1) = v1;                                      // 0x001a243c: sh $v1, 0($a1)
    v1 = g_002a050f;  // Global at 0x002a050f                   // 0x001a2440: lhu $v1, 2($s0)
    *(uint16_t*)((a1) + 2) = v1;                                // 0x001a2444: sh $v1, 2($a1)
    s0 = s0 + 4;                                                // 0x001a2448: addiu $s0, $s0, 4
    a1 = a1 + 4;                                                // 0x001a244c: addiu $a1, $a1, 4
label_0x1a2450:
    v1 = *(uint16_t*)((s1) + 2);                                // 0x001a2450: lhu $v1, 2($s1)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001a2454: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1a2434;                           // 0x001a2458: bnez $v1, 0x1a2434
    /* nop */                                                   // 0x001a245c: nop 
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001a2460: lw $a0, 4($s1)
    v1 = *(int32_t*)((gp) + -0x6428);                           // 0x001a2464: lw $v1, -0x6428($gp)
    v1 = a0 - v1;                                               // 0x001a2468: subu $v1, $a0, $v1
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001a246c: sw $v1, 4($s1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a2474: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2478: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a247c: jr $ra
    sp = sp + 0x30;                                             // 0x001a2480: addiu $sp, $sp, 0x30
}
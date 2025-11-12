void func_001a2250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a2250: addiu $sp, $sp, -0x30
    v0 = 0x22;                                                  // 0x001a2254: addiu $v0, $zero, 0x22
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a2260: addu.qb $zero, $sp, $s1
    *(uint8_t*)(a1) = v0;                                       // 0x001a226c: sb $v0, 0($a1)
    s0 = a0 + 0xc;                                              // 0x001a2270: addiu $s0, $a0, 0xc
    *(uint8_t*)((a1) + 1) = 0;                                  // 0x001a2274: sb $zero, 1($a1)
    v0 = g_002a0505;  // Global at 0x002a0505                   // 0x001a2278: lw $v0, 4($a0)
    *(uint16_t*)((a1) + 2) = v0;                                // 0x001a227c: sh $v0, 2($a1)
    a0 = 0x2a << 16;                                            // 0x001a2280: lui $a0, 0x2a
    v0 = *(uint16_t*)((a1) + 2);                                // 0x001a2284: lhu $v0, 2($a1)
    a0 = a0 + 0x500;                                            // 0x001a2288: addiu $a0, $a0, 0x500
    func_001899f8();  // 0x1898e0                                // 0x001a228c: jal 0x1898e0
    a1 = v0 << 4;                                               // 0x001a2290: sll $a1, $v0, 4
    goto label_0x1a22d0;                                        // 0x001a229c: b 0x1a22d0
    *(uint32_t*)((s1) + 4) = a1;                                // 0x001a22a0: sw $a1, 4($s1)
label_0x1a22a4:
    FPU_F0 = *(float*)(s0);  // Load float                      // 0x001a22a4: lwc1 $f0, 0($s0)
    a0 = a0 + 1;                                                // 0x001a22a8: addiu $a0, $a0, 1
    *(float*)(a1) = FPU_F0;  // Store float                     // 0x001a22ac: swc1 $f0, 0($a1)
    FPU_F0 = *(float*)((s0) + 4);  // Load float                // 0x001a22b0: lwc1 $f0, 4($s0)
    *(float*)((a1) + 4) = FPU_F0;  // Store float               // 0x001a22b4: swc1 $f0, 4($a1)
    FPU_F0 = *(float*)((s0) + 8);  // Load float                // 0x001a22b8: lwc1 $f0, 8($s0)
    *(float*)((a1) + 8) = FPU_F0;  // Store float               // 0x001a22bc: swc1 $f0, 8($a1)
    FPU_F0 = *(float*)((s0) + 0xc);  // Load float              // 0x001a22c0: lwc1 $f0, 0xc($s0)
    *(float*)((a1) + 0xc) = FPU_F0;  // Store float             // 0x001a22c4: swc1 $f0, 0xc($a1)
    s0 = s0 + 0x10;                                             // 0x001a22c8: addiu $s0, $s0, 0x10
    a1 = a1 + 0x10;                                             // 0x001a22cc: addiu $a1, $a1, 0x10
label_0x1a22d0:
    v1 = *(uint16_t*)((s1) + 2);                                // 0x001a22d0: lhu $v1, 2($s1)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001a22d4: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1a22a4;                           // 0x001a22d8: bnez $v1, 0x1a22a4
    /* nop */                                                   // 0x001a22dc: nop 
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001a22e0: lw $a0, 4($s1)
    v1 = *(int32_t*)((gp) + -0x6428);                           // 0x001a22e4: lw $v1, -0x6428($gp)
    v1 = a0 - v1;                                               // 0x001a22e8: subu $v1, $a0, $v1
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001a22ec: sw $v1, 4($s1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a22f4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a22f8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a22fc: jr $ra
    sp = sp + 0x30;                                             // 0x001a2300: addiu $sp, $sp, 0x30
}
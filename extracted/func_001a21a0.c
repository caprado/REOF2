void func_001a21a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a21a0: addiu $sp, $sp, -0x30
    v0 = 0x21;                                                  // 0x001a21a4: addiu $v0, $zero, 0x21
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a21b0: addu.qb $zero, $sp, $s1
    *(uint8_t*)(a1) = v0;                                       // 0x001a21bc: sb $v0, 0($a1)
    s0 = a0 + 0xc;                                              // 0x001a21c0: addiu $s0, $a0, 0xc
    *(uint8_t*)((a1) + 1) = 0;                                  // 0x001a21c4: sb $zero, 1($a1)
    v0 = g_002a0505;  // Global at 0x002a0505                   // 0x001a21c8: lw $v0, 4($a0)
    *(uint16_t*)((a1) + 2) = v0;                                // 0x001a21cc: sh $v0, 2($a1)
    a0 = 0x2a << 16;                                            // 0x001a21d0: lui $a0, 0x2a
    v0 = *(uint16_t*)((a1) + 2);                                // 0x001a21d4: lhu $v0, 2($a1)
    a0 = a0 + 0x500;                                            // 0x001a21d8: addiu $a0, $a0, 0x500
    func_001898e0();  // 1898e0                                // 0x001a21dc: jal 0x1898e0
    a1 = v0 << 3;                                               // 0x001a21e0: sll $a1, $v0, 3
    goto label_0x1a2210;                                        // 0x001a21ec: b 0x1a2210
    *(uint32_t*)((s1) + 4) = a1;                                // 0x001a21f0: sw $a1, 4($s1)
label_0x1a21f4:
    FPU_F0 = *(float*)(s0);  // Load float                      // 0x001a21f4: lwc1 $f0, 0($s0)
    a0 = a0 + 1;                                                // 0x001a21f8: addiu $a0, $a0, 1
    *(float*)(a1) = FPU_F0;  // Store float                     // 0x001a21fc: swc1 $f0, 0($a1)
    FPU_F0 = *(float*)((s0) + 4);  // Load float                // 0x001a2200: lwc1 $f0, 4($s0)
    *(float*)((a1) + 4) = FPU_F0;  // Store float               // 0x001a2204: swc1 $f0, 4($a1)
    s0 = s0 + 8;                                                // 0x001a2208: addiu $s0, $s0, 8
    a1 = a1 + 8;                                                // 0x001a220c: addiu $a1, $a1, 8
label_0x1a2210:
    v1 = *(uint16_t*)((s1) + 2);                                // 0x001a2210: lhu $v1, 2($s1)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001a2214: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1a21f4;                           // 0x001a2218: bnez $v1, 0x1a21f4
    /* nop */                                                   // 0x001a221c: nop 
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001a2220: lw $a0, 4($s1)
    v1 = *(int32_t*)((gp) + -0x6428);                           // 0x001a2224: lw $v1, -0x6428($gp)
    v1 = a0 - v1;                                               // 0x001a2228: subu $v1, $a0, $v1
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001a222c: sw $v1, 4($s1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a2234: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2238: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a223c: jr $ra
    sp = sp + 0x30;                                             // 0x001a2240: addiu $sp, $sp, 0x30
}
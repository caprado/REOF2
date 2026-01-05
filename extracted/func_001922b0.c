void func_001922b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001922b0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001922b8: addu.qb $zero, $sp, $s1
    s1 = *(int32_t*)((a0) + 0x14);                              // 0x001922c0: lw $s1, 0x14($a0)
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x001922c4: lw $a0, 0x18($s1)
    thunk_func_0018dab0();  // 18dab0                          // 0x001922c8: jal 0x18dab0
    a1 = 4;                                                     // 0x001922cc: addiu $a1, $zero, 4
    func_0018db00();  // 18db00                                // 0x001922d4: jal 0x18db00
    goto label_0x1922fc;                                        // 0x001922e0: b 0x1922fc
label_0x1922e8:
    v1 = *(int32_t*)(a0);                                       // 0x001922e8: lw $v1, 0($a0)
    a1 = a1 + 1;                                                // 0x001922ec: addiu $a1, $a1, 1
    *(uint32_t*)(v0) = v1;                                      // 0x001922f0: sw $v1, 0($v0)
    a0 = a0 + 4;                                                // 0x001922f4: addiu $a0, $a0, 4
    v0 = v0 + 4;                                                // 0x001922f8: addiu $v0, $v0, 4
label_0x1922fc:
    v1 = *(int32_t*)((s1) + 0x18);                              // 0x001922fc: lw $v1, 0x18($s1)
    v1 = (unsigned)v1 >> 2;                                     // 0x00192300: srl $v1, $v1, 2
    v1 = ((unsigned)a1 < (unsigned)v1) ? 1 : 0;                 // 0x00192304: sltu $v1, $a1, $v1
    if (v1 != 0) goto label_0x1922e8;                           // 0x00192308: bnez $v1, 0x1922e8
    /* nop */                                                   // 0x0019230c: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00192318: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019231c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00192320: jr $ra
    sp = sp + 0x30;                                             // 0x00192324: addiu $sp, $sp, 0x30
}
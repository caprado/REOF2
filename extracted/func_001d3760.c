void func_001d3760() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001d3760: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d3768: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d3774: addu.qb $zero, $sp, $s1
    func_001d3540();  // 0x1d34f0                                // 0x001d3780: jal 0x1d34f0
    if (s0 != 0) goto label_0x1d379c;                           // 0x001d378c: bnez $s0, 0x1d379c
    goto label_0x1d37e4;                                        // 0x001d3794: b 0x1d37e4
label_0x1d379c:
    func_0034dac0();  // 0x34dac0                               // 0x001d379c: jal 0x34dac0
    /* nop */                                                   // 0x001d37a0: nop 
    *(uint32_t*)(s0) = v0;                                      // 0x001d37a4: sw $v0, 0($s0)
    v0 = *(int32_t*)(s0);                                       // 0x001d37a8: lw $v0, 0($s0)
    if (v0 == 0) goto label_0x1d37d8;                           // 0x001d37ac: beqz $v0, 0x1d37d8
    *(uint32_t*)((s0) + 4) = s3;                                // 0x001d37b4: sw $s3, 4($s0)
    a0 = 4;                                                     // 0x001d37b8: addiu $a0, $zero, 4
    *(uint16_t*)((s0) + 8) = s2;                                // 0x001d37bc: sh $s2, 8($s0)
    v1 = 1;                                                     // 0x001d37c0: addiu $v1, $zero, 1
    *(uint16_t*)((s0) + 0xa) = s1;                              // 0x001d37c4: sh $s1, 0xa($s0)
    *(uint16_t*)((s0) + 0xc) = a0;                              // 0x001d37cc: sh $a0, 0xc($s0)
    goto label_0x1d37e4;                                        // 0x001d37d0: b 0x1d37e4
    *(uint16_t*)((s0) + 0xe) = v1;                              // 0x001d37d4: sh $v1, 0xe($s0)
label_0x1d37d8:
    func_001d35a0();  // 0x1d3540                                // 0x001d37d8: jal 0x1d3540
    /* nop */                                                   // 0x001d37dc: nop 
label_0x1d37e4:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d37ec: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d37f0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d37f4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d37f8: jr $ra
    sp = sp + 0x50;                                             // 0x001d37fc: addiu $sp, $sp, 0x50
}
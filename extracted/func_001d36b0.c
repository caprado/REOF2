void func_001d36b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_34, local_38, local_44;
    
    sp = sp + -0x80;                                            // 0x001d36b0: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d36b8: addu.qb $zero, $sp, $s1
    func_001d3540();  // 0x1d34f0                                // 0x001d36c0: jal 0x1d34f0
    if (s0 != 0) goto label_0x1d36dc;                           // 0x001d36cc: bnez $s0, 0x1d36dc
    goto label_0x1d3740;                                        // 0x001d36d4: b 0x1d3740
label_0x1d36dc:
    func_0018e210();  // 0x18e090                                // 0x001d36dc: jal 0x18e090
    a1 = 4;                                                     // 0x001d36e0: addiu $a1, $zero, 4
    *(uint32_t*)(s0) = v0;                                      // 0x001d36e4: sw $v0, 0($s0)
    v0 = *(int32_t*)(s0);                                       // 0x001d36e8: lw $v0, 0($s0)
    if (v0 == 0) goto label_0x1d3734;                           // 0x001d36ec: beqz $v0, 0x1d3734
    a1 = v0 & 0xffff;                                           // 0x001d36f4: andi $a1, $v0, 0xffff
    func_0019d7e0();  // 0x19d630                                // 0x001d36f8: jal 0x19d630
    a0 = sp + 0x30;                                             // 0x001d36fc: addiu $a0, $sp, 0x30
    v1 = 1;                                                     // 0x001d3700: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1d372c;                          // 0x001d3704: bne $v0, $v1, 0x1d372c
    /* nop */                                                   // 0x001d3708: nop 
    *(uint32_t*)((s0) + 4) = s1;                                // 0x001d370c: sw $s1, 4($s0)
    v0 = local_34;                                              // 0x001d3710: lw $v0, 0x34($sp)
    *(uint16_t*)((s0) + 8) = v0;                                // 0x001d3714: sh $v0, 8($s0)
    v0 = local_38;                                              // 0x001d3718: lw $v0, 0x38($sp)
    *(uint16_t*)((s0) + 0xa) = v0;                              // 0x001d371c: sh $v0, 0xa($s0)
    v0 = local_44;                                              // 0x001d3720: lw $v0, 0x44($sp)
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x001d3724: sh $v0, 0xc($s0)
    *(uint16_t*)((s0) + 0xe) = v1;                              // 0x001d3728: sh $v1, 0xe($s0)
label_0x1d372c:
    goto label_0x1d3740;                                        // 0x001d372c: b 0x1d3740
label_0x1d3734:
    func_001d35a0();  // 0x1d3540                                // 0x001d3734: jal 0x1d3540
    /* nop */                                                   // 0x001d3738: nop 
label_0x1d3740:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d3744: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d3748: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d374c: jr $ra
    sp = sp + 0x80;                                             // 0x001d3750: addiu $sp, $sp, 0x80
}
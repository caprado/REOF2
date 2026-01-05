void func_001d3540() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d3540: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)(a0);                                       // 0x001d354c: lw $v1, 0($a0)
    if (v1 == 0) goto label_0x1d3588;                           // 0x001d3550: beqz $v1, 0x1d3588
    v1 = *(int16_t*)((s0) + 0xe);                               // 0x001d3558: lh $v1, 0xe($s0)
    v1 = v1 + -1;                                               // 0x001d355c: addiu $v1, $v1, -1
    *(uint16_t*)((s0) + 0xe) = v1;                              // 0x001d3560: sh $v1, 0xe($s0)
    v1 = *(int16_t*)((s0) + 0xe);                               // 0x001d3564: lh $v1, 0xe($s0)
    if (v1 > 0) goto label_0x1d3588;                            // 0x001d3568: bgtz $v1, 0x1d3588
    /* nop */                                                   // 0x001d356c: nop 
    func_001d34a0();  // 1d34a0                                // 0x001d3570: jal 0x1d34a0
    a0 = *(int32_t*)(s0);                                       // 0x001d3574: lw $a0, 0($s0)
    func_00107c70();  // 107c70                                // 0x001d3580: jal 0x107c70
    a2 = 0x10;                                                  // 0x001d3584: addiu $a2, $zero, 0x10
label_0x1d3588:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d358c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d3590: jr $ra
    sp = sp + 0x20;                                             // 0x001d3594: addiu $sp, $sp, 0x20
}
void func_00141568() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00141568: addiu $sp, $sp, -0x10
    s0 = 0x21 << 16;                                            // 0x00141574: lui $s0, 0x21
    s0 = s0 + 0xc38;                                            // 0x00141578: addiu $s0, $s0, 0xc38
    a2 = 0x7f;                                                  // 0x0014157c: addiu $a2, $zero, 0x7f
    func_0010b460();  // 0x10b2a0                                // 0x00141584: jal 0x10b2a0
    v0 = 0x25 << 16;                                            // 0x0014158c: lui $v0, 0x25
    v0 = v0 + 0x6170;                                           // 0x00141590: addiu $v0, $v0, 0x6170
    v1 = g_00256170;  // Global at 0x00256170                   // 0x00141594: lw $v1, 0($v0)
    if (v1 == 0) goto label_0x1415a8;                           // 0x00141598: beqz $v1, 0x1415a8
    /* call function at address in v1 */                        // 0x001415a0: jalr $v1
    a0 = g_00256174;  // Global at 0x00256174                   // 0x001415a4: lw $a0, 4($v0)
label_0x1415a8:
    return;                                                     // 0x001415b0: jr $ra
    sp = sp + 0x10;                                             // 0x001415b4: addiu $sp, $sp, 0x10
}
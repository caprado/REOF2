void func_001c8980() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001c8980: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c898c: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c8998: jal 0x1c7770
    s0 = 0x31 << 16;                                            // 0x001c89a0: lui $s0, 0x31
    a1 = 0x28;                                                  // 0x001c89a4: addiu $a1, $zero, 0x28
    s0 = s0 + 0x669c;                                           // 0x001c89a8: addiu $s0, $s0, 0x669c
    a0 = 0x3f;                                                  // 0x001c89ac: addiu $a0, $zero, 0x3f
    func_001c7670();  // 0x1c75b0                                // 0x001c89b4: jal 0x1c75b0
    g_0031669c = s1;  // Global at 0x0031669c                   // 0x001c89b8: sh $s1, 0($s0)
    at = (s1 < 0) ? 1 : 0;                                      // 0x001c89c4: slt $at, $s1, $zero
    if (at != 0) goto label_0x1c89d8;                           // 0x001c89c8: bnez $at, 0x1c89d8
    /* nop */                                                   // 0x001c89cc: nop 
    v0 = g_003166a0;  // Global at 0x003166a0                   // 0x001c89d0: lw $v0, 4($s0)
    *(uint32_t*)(s2) = v0;                                      // 0x001c89d4: sw $v0, 0($s2)
label_0x1c89d8:
    func_001c7790();  // 0x1c7780                                // 0x001c89d8: jal 0x1c7780
    /* nop */                                                   // 0x001c89dc: nop 
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c89e8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c89ec: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c89f0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c89f4: jr $ra
    sp = sp + 0x40;                                             // 0x001c89f8: addiu $sp, $sp, 0x40
}
void func_001c8a00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c8a00: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c8a08: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c8a10: jal 0x1c7770
    a1 = 0x20;                                                  // 0x001c8a18: addiu $a1, $zero, 0x20
    a0 = 0x46;                                                  // 0x001c8a1c: addiu $a0, $zero, 0x46
    func_001c7670();  // 0x1c75b0                                // 0x001c8a20: jal 0x1c75b0
    at = (s0 < 0) ? 1 : 0;                                      // 0x001c8a30: slt $at, $s0, $zero
    if (at != 0) goto label_0x1c8a48;                           // 0x001c8a34: bnez $at, 0x1c8a48
    at = 0x31 << 16;                                            // 0x001c8a38: lui $at, 0x31
    v0 = g_00316680;  // Global at 0x00316680                   // 0x001c8a3c: lw $v0, 0x6680($at)
    *(uint32_t*)(s1) = v0;                                      // 0x001c8a40: sw $v0, 0($s1)
    /* nop */                                                   // 0x001c8a44: nop 
label_0x1c8a48:
    func_001c7790();  // 0x1c7780                                // 0x001c8a48: jal 0x1c7780
    /* nop */                                                   // 0x001c8a4c: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c8a58: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8a5c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8a60: jr $ra
    sp = sp + 0x30;                                             // 0x001c8a64: addiu $sp, $sp, 0x30
}
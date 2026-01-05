void func_001d6e70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001d6e70: addiu $sp, $sp, -0x30
    a0 = 0x1400;                                                // 0x001d6e74: addiu $a0, $zero, 0x1400
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d6e7c: addu.qb $zero, $sp, $s1
    func_001d3c20();  // 1d3c20                                // 0x001d6e80: jal 0x1d3c20
    func_001d7130();  // 1d7130                                // 0x001d6e88: jal 0x1d7130
    /* nop */                                                   // 0x001d6e8c: nop 
    at = 0x31 << 16;                                            // 0x001d6e90: lui $at, 0x31
    v1 = 0x49 << 16;                                            // 0x001d6e94: lui $v1, 0x49
    a0 = g_003137bc;  // Global at 0x003137bc                   // 0x001d6e98: lhu $a0, 0x37bc($at)
    v1 = v1 + -0xf90;                                           // 0x001d6e9c: addiu $v1, $v1, -0xf90
    a0 = a0 << 4;                                               // 0x001d6ea4: sll $a0, $a0, 4
    s1 = v1 + a0;                                               // 0x001d6ea8: addu $s1, $v1, $a0
label_0x1d6eac:
    a1 = *(uint16_t*)(s1);                                      // 0x001d6eac: lhu $a1, 0($s1)
    v1 = 0 | 0xffff;                                            // 0x001d6eb0: ori $v1, $zero, 0xffff
    a0 = *(uint16_t*)((s1) + 2);                                // 0x001d6eb4: lhu $a0, 2($s1)
    if (a1 != v1) goto label_0x1d6ecc;                          // 0x001d6eb8: bne $a1, $v1, 0x1d6ecc
    s1 = s1 + 4;                                                // 0x001d6ebc: addiu $s1, $s1, 4
    v1 = a0 & 0xffff;                                           // 0x001d6ec0: andi $v1, $a0, 0xffff
    if (v1 == 0) goto label_0x1d6eec;                           // 0x001d6ec4: beqz $v1, 0x1d6eec
    /* nop */                                                   // 0x001d6ec8: nop 
label_0x1d6ecc:
    v1 = 0 | 0xffff;                                            // 0x001d6ecc: ori $v1, $zero, 0xffff
    if (a1 == v1) goto label_0x1d6eec;                          // 0x001d6ed0: beq $a1, $v1, 0x1d6eec
    a3 = 3;                                                     // 0x001d6edc: addiu $a3, $zero, 3
    func_001d5f60();  // 1d5f60                                // 0x001d6ee4: jal 0x1d5f60
    t1 = -1;                                                    // 0x001d6ee8: addiu $t1, $zero, -1
label_0x1d6eec:
    s0 = s0 + 1;                                                // 0x001d6eec: addiu $s0, $s0, 1
    v1 = (s0 < 4) ? 1 : 0;                                      // 0x001d6ef0: slti $v1, $s0, 4
    if (v1 != 0) goto label_0x1d6eac;                           // 0x001d6ef4: bnez $v1, 0x1d6eac
    /* nop */                                                   // 0x001d6ef8: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d6f00: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d6f04: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d6f08: jr $ra
    sp = sp + 0x30;                                             // 0x001d6f0c: addiu $sp, $sp, 0x30
}
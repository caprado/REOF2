void func_001a1e50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001a1e50: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a1e5c: addu.qb $zero, $sp, $s1
    func_001a2740();  // 0x1a2720                                // 0x001a1e70: jal 0x1a2720
    v1 = (v0 < s2) ? 1 : 0;                                     // 0x001a1e78: slt $v1, $v0, $s2
    if (v1 != 0) goto label_0x1a1f08;                           // 0x001a1e7c: bnez $v1, 0x1a1f08
    func_001a1a60();  // 0x1a1a10                                // 0x001a1e84: jal 0x1a1a10
    if (v0 == 0) goto label_0x1a1f08;                           // 0x001a1e8c: beqz $v0, 0x1a1f08
    func_001a1a10();  // 0x1a1a00                                // 0x001a1e94: jal 0x1a1a00
    if (v0 == 0) goto label_0x1a1f08;                           // 0x001a1e9c: beqz $v0, 0x1a1f08
    /* nop */                                                   // 0x001a1ea0: nop 
    a0 = *(uint8_t*)(v0);                                       // 0x001a1ea4: lbu $a0, 0($v0)
    v1 = 2;                                                     // 0x001a1ea8: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1a1ed0;                          // 0x001a1eac: beq $a0, $v1, 0x1a1ed0
    v1 = 0x2000;                                                // 0x001a1eb0: addiu $v1, $zero, 0x2000
    v1 = 1;                                                     // 0x001a1eb4: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1a1ec8;                          // 0x001a1eb8: beq $a0, $v1, 0x1a1ec8
    v1 = 0x1000;                                                // 0x001a1ebc: addiu $v1, $zero, 0x1000
    goto label_0x1a1ed8;                                        // 0x001a1ec0: b 0x1a1ed8
    a0 = *(uint16_t*)(s1);                                      // 0x001a1ec4: lhu $a0, 0($s1)
label_0x1a1ec8:
    goto label_0x1a1ed4;                                        // 0x001a1ec8: b 0x1a1ed4
    *(uint16_t*)(s1) = v1;                                      // 0x001a1ecc: sh $v1, 0($s1)
label_0x1a1ed0:
    *(uint16_t*)(s1) = v1;                                      // 0x001a1ed0: sh $v1, 0($s1)
label_0x1a1ed4:
    a0 = *(uint16_t*)(s1);                                      // 0x001a1ed4: lhu $a0, 0($s1)
label_0x1a1ed8:
    v1 = 0x2000;                                                // 0x001a1ed8: addiu $v1, $zero, 0x2000
    a0 = a0 & 0xf000;                                           // 0x001a1edc: andi $a0, $a0, 0xf000
    if (a0 == v1) goto label_0x1a1ef8;                          // 0x001a1ee0: beq $a0, $v1, 0x1a1ef8
    v1 = 0x1000;                                                // 0x001a1ee4: addiu $v1, $zero, 0x1000
    if (a0 == v1) goto label_0x1a1ef8;                          // 0x001a1ee8: beq $a0, $v1, 0x1a1ef8
    /* nop */                                                   // 0x001a1eec: nop 
    goto label_0x1a1f0c;                                        // 0x001a1ef0: b 0x1a1f0c
label_0x1a1ef8:
    func_001a20e0();  // 0x1a1f20                                // 0x001a1f00: jal 0x1a1f20
label_0x1a1f08:
label_0x1a1f0c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a1f0c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a1f10: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a1f14: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a1f18: jr $ra
    sp = sp + 0x40;                                             // 0x001a1f1c: addiu $sp, $sp, 0x40
}
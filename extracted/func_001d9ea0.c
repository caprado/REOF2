void func_001d9ea0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x001d9ea0: addiu $sp, $sp, -0xb0
    at = 0x31 << 16;                                            // 0x001d9ea4: lui $at, 0x31
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d9eb0: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d9ec0: addu.qb $zero, $sp, $s1
    s0 = g_00313818;  // Global at 0x00313818                   // 0x001d9ec8: lw $s0, 0x3818($at)
    func_001a2740();  // 1a2740                                // 0x001d9ecc: jal 0x1a2740
    at = 0x31 << 16;                                            // 0x001d9ed4: lui $at, 0x31
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d9edc: lw $v1, 0x37fc($at)
    v0 = 0x20 << 16;                                            // 0x001d9ee0: lui $v0, 0x20
    a0 = sp + 0x60;                                             // 0x001d9ee4: addiu $a0, $sp, 0x60
    func_0018fba0();  // 18fba0                                // 0x001d9ee8: jal 0x18fba0
    s1 = v1 + v0;                                               // 0x001d9eec: addu $s1, $v1, $v0
    a0 = sp + 0xa0;                                             // 0x001d9ef4: addiu $a0, $sp, 0xa0
    thunk_func_001da600();  // 1da600                          // 0x001d9efc: jal 0x1da600
    func_00192230();  // 192230                                // 0x001d9f04: jal 0x192230
    a0 = sp + 0xa0;                                             // 0x001d9f08: addiu $a0, $sp, 0xa0
    *(uint32_t*)((s4) + 0x80c) = v0;                            // 0x001d9f0c: sw $v0, 0x80c($s4)
    func_001b0e30();  // 1b0e30                                // 0x001d9f10: jal 0x1b0e30
    a0 = *(int32_t*)((s4) + 0x80c);                             // 0x001d9f14: lw $a0, 0x80c($s4)
    a1 = *(int32_t*)((s4) + 0x80c);                             // 0x001d9f18: lw $a1, 0x80c($s4)
    func_00193400();  // 193400                                // 0x001d9f1c: jal 0x193400
    func_001930d0();  // 1930d0                                // 0x001d9f28: jal 0x1930d0
    a1 = sp + 0x60;                                             // 0x001d9f2c: addiu $a1, $sp, 0x60
    goto label_0x1d9f7c;                                        // 0x001d9f30: b 0x1d9f7c
label_0x1d9f38:
    v0 = *(int32_t*)((s1) + 0x174);                             // 0x001d9f38: lw $v0, 0x174($s1)
    if (v0 < 0) goto label_0x1d9f74;                            // 0x001d9f3c: bltz $v0, 0x1d9f74
    /* nop */                                                   // 0x001d9f40: nop 
    v0 = v0 << 6;                                               // 0x001d9f44: sll $v0, $v0, 6
    a0 = 8;                                                     // 0x001d9f48: addiu $a0, $zero, 8
    a2 = s0 + v0;                                               // 0x001d9f4c: addu $a2, $s0, $v0
label_0x1d9f54:
    v1 = *(int32_t*)(a1);                                       // 0x001d9f54: lw $v1, 0($a1)
    a0 = a0 + -1;                                               // 0x001d9f58: addiu $a0, $a0, -1
    v0 = *(int32_t*)((a1) + 4);                                 // 0x001d9f5c: lw $v0, 4($a1)
    *(uint32_t*)(a2) = v1;                                      // 0x001d9f60: sw $v1, 0($a2)
    a1 = a1 + 8;                                                // 0x001d9f64: addiu $a1, $a1, 8
    *(uint32_t*)((a2) + 4) = v0;                                // 0x001d9f68: sw $v0, 4($a2)
    if (a0 > 0) goto label_0x1d9f54;                            // 0x001d9f6c: bgtz $a0, 0x1d9f54
    a2 = a2 + 8;                                                // 0x001d9f70: addiu $a2, $a2, 8
label_0x1d9f74:
    a3 = a3 + 1;                                                // 0x001d9f74: addiu $a3, $a3, 1
    s1 = s1 + 0x190;                                            // 0x001d9f78: addiu $s1, $s1, 0x190
label_0x1d9f7c:
    v0 = (a3 < s2) ? 1 : 0;                                     // 0x001d9f7c: slt $v0, $a3, $s2
    if (v0 != 0) goto label_0x1d9f38;                           // 0x001d9f80: bnez $v0, 0x1d9f38
    /* nop */                                                   // 0x001d9f84: nop 
    func_00192330();  // 192330                                // 0x001d9f88: jal 0x192330
    a0 = *(int32_t*)((s4) + 0x80c);                             // 0x001d9f8c: lw $a0, 0x80c($s4)
    func_001b0e80();  // 1b0e80                                // 0x001d9f90: jal 0x1b0e80
    a0 = *(int32_t*)((s4) + 0x80c);                             // 0x001d9f94: lw $a0, 0x80c($s4)
    *(uint32_t*)((s4) + 0x80c) = 0;                             // 0x001d9f98: sw $zero, 0x80c($s4)
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d9fa0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d9fa8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d9fac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d9fb0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d9fb4: jr $ra
    sp = sp + 0xb0;                                             // 0x001d9fb8: addiu $sp, $sp, 0xb0
}
void func_001c6ef0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0xec);                              // 0x001c6ef0: lw $v0, 0xec($a0)
    return func_001b0150();  // Tail call                        // 0x001c6ef4: j 0x1aff60
    a0 = v0 + 0x108;                                            // 0x001c6ef8: addiu $a0, $v0, 0x108
    /* nop */                                                   // 0x001c6efc: nop 
    sp = sp + -0x30;                                            // 0x001c6f00: addiu $sp, $sp, -0x30
    v0 = 3 << 16;                                               // 0x001c6f04: lui $v0, 3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c6f0c: addu.qb $zero, $sp, $s1
    a0 = g_000301f4;  // Global at 0x000301f4                   // 0x001c6f18: lw $a0, 0xec($a0)
    a2 = *(int32_t*)((s1) + 0x20);                              // 0x001c6f1c: lw $a2, 0x20($s1)
    func_001c7310();  // 0x1c7230                                // 0x001c6f20: jal 0x1c7230
    a1 = v0 | 0xfcc8;                                           // 0x001c6f24: ori $a1, $v0, 0xfcc8
    if (v0 >= 0) goto label_0x1c6f38;                           // 0x001c6f28: bgez $v0, 0x1c6f38
    /* nop */                                                   // 0x001c6f2c: nop 
    goto label_0x1c6f70;                                        // 0x001c6f30: b 0x1c6f70
    v0 = -1;                                                    // 0x001c6f34: addiu $v0, $zero, -1
label_0x1c6f38:
    s0 = *(int32_t*)((s1) + 0xe8);                              // 0x001c6f38: lw $s0, 0xe8($s1)
    v0 = 3 << 16;                                               // 0x001c6f3c: lui $v0, 3
    a1 = *(int32_t*)((s1) + 0xec);                              // 0x001c6f40: lw $a1, 0xec($s1)
    a2 = v0 | 0xfcc8;                                           // 0x001c6f44: ori $a2, $v0, 0xfcc8
    func_00107b68();  // 0x107ab8                                // 0x001c6f48: jal 0x107ab8
    func_001b0290();  // 0x1b0150                                // 0x001c6f50: jal 0x1b0150
    a0 = s0 + 0x108;                                            // 0x001c6f54: addiu $a0, $s0, 0x108
    a2 = *(int32_t*)((s1) + 0x20);                              // 0x001c6f58: lw $a2, 0x20($s1)
    v0 = 3 << 16;                                               // 0x001c6f5c: lui $v0, 3
    func_001c7170();  // 0x1c7050                                // 0x001c6f64: jal 0x1c7050
    a1 = v0 | 0xfcc8;                                           // 0x001c6f68: ori $a1, $v0, 0xfcc8
label_0x1c6f70:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c6f74: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6f78: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c6f7c: jr $ra
    sp = sp + 0x30;                                             // 0x001c6f80: addiu $sp, $sp, 0x30
}
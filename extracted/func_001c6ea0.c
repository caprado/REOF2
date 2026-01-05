void func_001c6ea0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c6ea0: addiu $sp, $sp, -0x20
    v0 = 3 << 16;                                               // 0x001c6ea4: lui $v0, 3
    a1 = v0 | 0xfcc8;                                           // 0x001c6eac: ori $a1, $v0, 0xfcc8
    a2 = *(int32_t*)((a0) + 0x20);                              // 0x001c6eb4: lw $a2, 0x20($a0)
    s0 = *(int32_t*)((a0) + 0xec);                              // 0x001c6eb8: lw $s0, 0xec($a0)
    func_001c7230();  // 1c7230                                // 0x001c6ebc: jal 0x1c7230
    if (v0 >= 0) goto label_0x1c6ed4;                           // 0x001c6ec4: bgez $v0, 0x1c6ed4
    a0 = s0 + 0x108;                                            // 0x001c6ec8: addiu $a0, $s0, 0x108
    goto label_0x1c6ee0;                                        // 0x001c6ecc: b 0x1c6ee0
    v0 = -1;                                                    // 0x001c6ed0: addiu $v0, $zero, -1
label_0x1c6ed4:
    func_001aff60();  // 1aff60                                // 0x001c6ed4: jal 0x1aff60
    /* nop */                                                   // 0x001c6ed8: nop 
label_0x1c6ee0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6ee4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c6ee8: jr $ra
    sp = sp + 0x20;                                             // 0x001c6eec: addiu $sp, $sp, 0x20
}
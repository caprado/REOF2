void func_00173ed8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00173ed8: addiu $sp, $sp, -0x10
    v1 = a1 << 3;                                               // 0x00173eec: sll $v1, $a1, 3
    v1 = v1 - a1;                                               // 0x00173ef0: subu $v1, $v1, $a1
    a2 = *(int32_t*)(a3);                                       // 0x00173ef8: lw $a2, 0($a3)
    v1 = v1 << 2;                                               // 0x00173efc: sll $v1, $v1, 2
    if (a2 < 0) goto label_0x173f54;                            // 0x00173f00: bltz $a2, 0x173f54
    v1 = v1 + a1;                                               // 0x00173f04: addu $v1, $v1, $a1
    a0 = v1 << 2;                                               // 0x00173f08: sll $a0, $v1, 2
    a0 = s0 + a0;                                               // 0x00173f0c: addu $a0, $s0, $a0
    a0 = a0 + 0x1178;                                           // 0x00173f10: addiu $a0, $a0, 0x1178
    v1 = *(int32_t*)(a0);                                       // 0x00173f14: lw $v1, 0($a0)
    /* beqzl $v1, 0x173f58 */                                   // 0x00173f18: beqzl $v1, 0x173f58
    func_00173fe8();  // 0x173f68                                // 0x00173f20: jal 0x173f68
    a1 = 0xff00 << 16;                                          // 0x00173f2c: lui $a1, 0xff00
    v1 = -1;                                                    // 0x00173f30: addiu $v1, $zero, -1
    if (v0 != v1) goto label_0x173f50;                          // 0x00173f34: bne $v0, $v1, 0x173f50
    a1 = a1 | 0x421;                                            // 0x00173f38: ori $a1, $a1, 0x421
    return func_00169940();  // Tail call                        // 0x00173f44: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00173f48: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00173f4c: nop 
label_0x173f50:
label_0x173f54:
    return;                                                     // 0x00173f5c: jr $ra
    sp = sp + 0x10;                                             // 0x00173f60: addiu $sp, $sp, 0x10
}
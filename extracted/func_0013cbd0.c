void func_0013cbd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013cbd0: addiu $sp, $sp, -0x10
    if (s0 != 0) goto label_0x13cc00;                           // 0x0013cbdc: bnez $s0, 0x13cc00
    a0 = 0x22 << 16;                                            // 0x0013cbe4: lui $a0, 0x22
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013cbf0: addiu $a0, $a0, 0x5be8
    return func_0013d248();  // Tail call                        // 0x0013cbf4: j 0x13d1b8
    sp = sp + 0x10;                                             // 0x0013cbf8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013cbfc: nop 
label_0x13cc00:
    v0 = *(int8_t*)((s0) + 1);                                  // 0x0013cc00: lb $v0, 1($s0)
    /* beqzl $v0, 0x13cc18 */                                   // 0x0013cc04: beqzl $v0, 0x13cc18
    v0 = *(int32_t*)((s0) + 0x24);                              // 0x0013cc08: lw $v0, 0x24($s0)
    func_0013cc38();  // 13cc38                                // 0x0013cc0c: jal 0x13cc38
    /* nop */                                                   // 0x0013cc10: nop 
    v0 = *(int32_t*)((s0) + 0x24);                              // 0x0013cc14: lw $v0, 0x24($s0)
    if (v0 <= 0) goto label_0x13cc24;                           // 0x0013cc18: blezl $v0, 0x13cc24
    v0 = 1;                                                     // 0x0013cc1c: addiu $v0, $zero, 1
    v0 = 2;                                                     // 0x0013cc20: addiu $v0, $zero, 2
label_0x13cc24:
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x0013cc24: sb $v0, 1($s0)
    return;                                                     // 0x0013cc30: jr $ra
    sp = sp + 0x10;                                             // 0x0013cc34: addiu $sp, $sp, 0x10
}
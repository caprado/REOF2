void func_0013cc38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013cc38: addiu $sp, $sp, -0x10
    if (s0 != 0) goto label_0x13cc68;                           // 0x0013cc44: bnez $s0, 0x13cc68
    a0 = 0x22 << 16;                                            // 0x0013cc4c: lui $a0, 0x22
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013cc58: addiu $a0, $a0, 0x5be8
    return func_0013d248();  // Tail call                        // 0x0013cc5c: j 0x13d1b8
    sp = sp + 0x10;                                             // 0x0013cc60: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013cc64: nop 
label_0x13cc68:
    v0 = *(int8_t*)((s0) + 1);                                  // 0x0013cc68: lb $v0, 1($s0)
    /* beqzl $v0, 0x13ccb0 */                                   // 0x0013cc6c: beqzl $v0, 0x13ccb0
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0013cc74: lw $a0, 0x28($s0)
    if (a0 == 0) goto label_0x13cc9c;                           // 0x0013cc78: beqz $a0, 0x13cc9c
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x0013cc7c: sb $zero, 1($s0)
    v1 = *(int8_t*)((s0) + 2);                                  // 0x0013cc80: lb $v1, 2($s0)
    v0 = 1;                                                     // 0x0013cc84: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x13cca0;                          // 0x0013cc88: bnel $v1, $v0, 0x13cca0
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x0013cc8c: sw $zero, 0x2c($s0)
    func_00130458();  // 0x130408                                // 0x0013cc90: jal 0x130408
    /* nop */                                                   // 0x0013cc94: nop 
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x0013cc98: sb $zero, 2($s0)
label_0x13cc9c:
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x0013cc9c: sw $zero, 0x2c($s0)
label_0x13cca0:
    func_0013cbd0();  // 0x13cb90                                // 0x0013cca0: jal 0x13cb90
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x0013cca8: sw $zero, 0x34($s0)
    return;                                                     // 0x0013ccb4: jr $ra
    sp = sp + 0x10;                                             // 0x0013ccb8: addiu $sp, $sp, 0x10
}
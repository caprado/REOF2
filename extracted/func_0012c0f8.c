void func_0012c0f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012c0f8: addiu $sp, $sp, -0x10
    a0 = 1;                                                     // 0x0012c108: addiu $a0, $zero, 1
    return func_001419d8();  // Tail call                        // 0x0012c114: j 0x141918
    sp = sp + 0x10;                                             // 0x0012c118: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c11c: nop 
    sp = sp + -0x10;                                            // 0x0012c120: addiu $sp, $sp, -0x10
    a0 = 7;                                                     // 0x0012c130: addiu $a0, $zero, 7
    return func_001419d8();  // Tail call                        // 0x0012c13c: j 0x141918
    sp = sp + 0x10;                                             // 0x0012c140: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c144: nop 
    sp = sp + -0x10;                                            // 0x0012c148: addiu $sp, $sp, -0x10
    a0 = 7;                                                     // 0x0012c14c: addiu $a0, $zero, 7
    return func_00141ab0();  // Tail call                        // 0x0012c158: j 0x141a30
    sp = sp + 0x10;                                             // 0x0012c15c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0012c160: addiu $sp, $sp, -0x10
    func_0013c7f0();  // 13c7f0                                // 0x0012c16c: jal 0x13c7f0
    return func_00139cf8();  // Tail call                       // 0x0012c180: j 0x139cf8
    sp = sp + 0x10;                                             // 0x0012c184: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0012c188: addiu $sp, $sp, -0x10
    return func_0013d748();  // Tail call                       // 0x0012c194: j 0x13d748
    sp = sp + 0x10;                                             // 0x0012c198: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c19c: nop 
    sp = sp + -0x10;                                            // 0x0012c1a0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x0012c1a8: lw $v0, 0xc($a0)
    a0 = a1 << 2;                                               // 0x0012c1ac: sll $a0, $a1, 2
    v0 = v0 + a0;                                               // 0x0012c1b0: addu $v0, $v0, $a0
    v1 = *(int32_t*)((v0) + 8);                                 // 0x0012c1b4: lw $v1, 8($v0)
    a0 = *(int32_t*)((v1) + 8);                                 // 0x0012c1b8: lw $a0, 8($v1)
    a2 = *(int32_t*)(a0);                                       // 0x0012c1bc: lw $a2, 0($a0)
    v0 = *(int32_t*)((a2) + 0x24);                              // 0x0012c1c0: lw $v0, 0x24($a2)
    /* call function at address in v0 */                        // 0x0012c1c4: jalr $v0
    a1 = 1;                                                     // 0x0012c1c8: addiu $a1, $zero, 1
    v0 = (unsigned)v0 >> 1;                                     // 0x0012c1d0: srl $v0, $v0, 1
    return;                                                     // 0x0012c1d4: jr $ra
    sp = sp + 0x10;                                             // 0x0012c1d8: addiu $sp, $sp, 0x10
}
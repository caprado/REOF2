void func_001af240() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    *(uint32_t*)((gp) + -0x63b4) = 0;                           // 0x001af240: sw $zero, -0x63b4($gp)
    a1 = 7;                                                     // 0x001af244: addiu $a1, $zero, 7
    *(uint32_t*)((gp) + -0x63b8) = 0;                           // 0x001af248: sw $zero, -0x63b8($gp)
    a0 = 0x2b << 16;                                            // 0x001af24c: lui $a0, 0x2b
    a0 = a0 + -0x5770;                                          // 0x001af250: addiu $a0, $a0, -0x5770
label_0x1af254:
    v1 = a1 << 2;                                               // 0x001af254: sll $v1, $a1, 2
    v1 = a0 + v1;                                               // 0x001af258: addu $v1, $a0, $v1
    a1 = a1 + -1;                                               // 0x001af25c: addiu $a1, $a1, -1
    *(uint32_t*)(v1) = 0;                                       // 0x001af260: sw $zero, 0($v1)
    /* nop */                                                   // 0x001af264: nop 
    if (a1 >= 0) goto label_0x1af254;                           // 0x001af268: bgez $a1, 0x1af254
    /* nop */                                                   // 0x001af26c: nop 
    return;                                                     // 0x001af270: jr $ra
    /* nop */                                                   // 0x001af274: nop 
}
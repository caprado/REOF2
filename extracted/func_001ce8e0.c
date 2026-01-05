void func_001ce8e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_28;
    
    return func_001d0000();  // Tail call                        // 0x001ce8e0: j 0x1cffd0
    /* nop */                                                   // 0x001ce8e4: nop 
    /* nop */                                                   // 0x001ce8e8: nop 
    /* nop */                                                   // 0x001ce8ec: nop 
    return thunk_func_001cffa0();  // Tail call                  // 0x001ce8f0: j 0x1ce810
    /* nop */                                                   // 0x001ce8f4: nop 
    /* nop */                                                   // 0x001ce8f8: nop 
    /* nop */                                                   // 0x001ce8fc: nop 
    sp = sp + -0x40;                                            // 0x001ce900: addiu $sp, $sp, -0x40
    v1 = 3;                                                     // 0x001ce904: addiu $v1, $zero, 3
    t0 = *(int32_t*)((gp) + -0x6260);                           // 0x001ce910: lw $t0, -0x6260($gp)
    t0 = *(int32_t*)((t0) + 8);                                 // 0x001ce914: lw $t0, 8($t0)
    *(uint16_t*)(a0) = t0;                                      // 0x001ce918: sh $t0, 0($a0)
    a0 = *(int32_t*)((gp) + -0x6260);                           // 0x001ce91c: lw $a0, -0x6260($gp)
    a0 = *(int32_t*)((a0) + 0xc);                               // 0x001ce920: lw $a0, 0xc($a0)
    *(uint16_t*)(a1) = a0;                                      // 0x001ce924: sh $a0, 0($a1)
    a0 = *(int16_t*)((gp) + -0x6228);                           // 0x001ce928: lh $a0, -0x6228($gp)
    a0 = a0 & 1;                                                // 0x001ce92c: andi $a0, $a0, 1
    *(uint16_t*)(a2) = a0;                                      // 0x001ce930: sh $a0, 0($a2)
    *(uint16_t*)(a3) = 0;                                       // 0x001ce934: sh $zero, 0($a3)
    a0 = *(int32_t*)((gp) + -0x6260);                           // 0x001ce938: lw $a0, -0x6260($gp)
    a0 = *(int32_t*)(a0);                                       // 0x001ce93c: lw $a0, 0($a0)
    if (a0 == v1) goto label_0x1ce95c;                          // 0x001ce940: beq $a0, $v1, 0x1ce95c
    v1 = 2;                                                     // 0x001ce948: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1ce95c;                          // 0x001ce94c: beq $a0, $v1, 0x1ce95c
    /* nop */                                                   // 0x001ce950: nop 
    goto label_0x1ce984;                                        // 0x001ce954: b 0x1ce984
label_0x1ce95c:
    func_001c9b00();  // 1c9b00                                // 0x001ce95c: jal 0x1c9b00
    a0 = sp + 0x20;                                             // 0x001ce960: addiu $a0, $sp, 0x20
    a0 = local_28;                                              // 0x001ce964: lw $a0, 0x28($sp)
    v1 = 0x64;                                                  // 0x001ce968: addiu $v1, $zero, 0x64
    /* divide: a0 / v1 -> hi:lo */                              // 0x001ce96c: div $zero, $a0, $v1
    /* nop */                                                   // 0x001ce970: nop 
    /* nop */                                                   // 0x001ce974: nop 
    /* mflo $v1 */                                              // 0x001ce978
    *(uint16_t*)(s0) = v1;                                      // 0x001ce97c: sh $v1, 0($s0)
label_0x1ce984:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce984: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce988: jr $ra
    sp = sp + 0x40;                                             // 0x001ce98c: addiu $sp, $sp, 0x40
}
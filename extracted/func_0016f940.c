void func_0016f940() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016f940: addiu $sp, $sp, -0x10
    a1 = -1;                                                    // 0x0016f944: addiu $a1, $zero, -1
    a2 = 0x15;                                                  // 0x0016f94c: addiu $a2, $zero, 0x15
    return func_00156058();  // Tail call                        // 0x0016f954: j 0x155f90
    sp = sp + 0x10;                                             // 0x0016f958: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016f95c: nop 
    *(uint32_t*)(a0) = 0;                                       // 0x0016f960: sw $zero, 0($a0)
    a1 = 0x10;                                                  // 0x0016f964: addiu $a1, $zero, 0x10
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x0016f968: sw $zero, 4($a0)
    t0 = a0 + 0x10;                                             // 0x0016f96c: addiu $t0, $a0, 0x10
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x0016f970: sw $zero, 8($a0)
    a3 = a0 + 0xc;                                              // 0x0016f974: addiu $a3, $a0, 0xc
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x0016f978: sw $zero, 0xc($a0)
    a2 = 0xf;                                                   // 0x0016f97c: addiu $a2, $zero, 0xf
    *(uint32_t*)((a0) + 0x10) = 0;                              // 0x0016f980: sw $zero, 0x10($a0)
    *(uint32_t*)((a0) + 0x14) = 0;                              // 0x0016f984: sw $zero, 0x14($a0)
    *(uint32_t*)((a0) + 0x18) = 0;                              // 0x0016f988: sw $zero, 0x18($a0)
    /* nop */                                                   // 0x0016f98c: nop 
label_0x16f990:
    v0 = a3 + a1;                                               // 0x0016f990: addu $v0, $a3, $a1
    v1 = t0 + a1;                                               // 0x0016f994: addu $v1, $t0, $a1
    a2 = a2 + -1;                                               // 0x0016f998: addiu $a2, $a2, -1
    *(uint32_t*)(v0) = 0;                                       // 0x0016f99c: sw $zero, 0($v0)
    *(uint32_t*)(v1) = 0;                                       // 0x0016f9a0: sw $zero, 0($v1)
    if (a2 >= 0) goto label_0x16f990;                           // 0x0016f9a4: bgez $a2, 0x16f990
    a1 = a1 + 8;                                                // 0x0016f9a8: addiu $a1, $a1, 8
    return;                                                     // 0x0016f9ac: jr $ra
    /* nop */                                                   // 0x0016f9b0: nop 
}
void func_00166928() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a3 << 3;                                               // 0x00166928: sll $v0, $a3, 3
    sp = sp + -0x10;                                            // 0x0016692c: addiu $sp, $sp, -0x10
    v0 = v0 - a3;                                               // 0x00166930: subu $v0, $v0, $a3
    v0 = v0 << 2;                                               // 0x00166938: sll $v0, $v0, 2
    a1 = 3;                                                     // 0x0016693c: addiu $a1, $zero, 3
    v0 = v0 + a3;                                               // 0x00166940: addu $v0, $v0, $a3
    a2 = 1;                                                     // 0x00166944: addiu $a2, $zero, 1
    v0 = v0 << 2;                                               // 0x00166948: sll $v0, $v0, 2
    s0 = a0 + v0;                                               // 0x00166950: addu $s0, $a0, $v0
    func_00166978();  // 166978                                // 0x00166958: jal 0x166978
    s0 = s0 + 0x10;                                             // 0x0016695c: addiu $s0, $s0, 0x10
    return func_00166998();  // Tail call                       // 0x0016696c: j 0x166998
    sp = sp + 0x10;                                             // 0x00166970: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00166974: nop 
    v0 = 9;                                                     // 0x00166978: addiu $v0, $zero, 9
    *(uint32_t*)(a0) = a1;                                      // 0x0016697c: sw $a1, 0($a0)
    *(uint32_t*)((a0) + 0x50) = v0;                             // 0x00166980: sw $v0, 0x50($a0)
    *(uint32_t*)((a0) + 4) = a2;                                // 0x00166984: sw $a2, 4($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x00166988: sw $zero, 8($a0)
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x0016698c: sw $zero, 0xc($a0)
    return;                                                     // 0x00166990: jr $ra
    *(uint32_t*)((a0) + 0x4c) = v0;                             // 0x00166994: sw $v0, 0x4c($a0)
}
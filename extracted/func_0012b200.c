void func_0012b200() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012b200: addiu $sp, $sp, -0x10
    return func_00141c80();  // Tail call                        // 0x0012b20c: j 0x141c68
    sp = sp + 0x10;                                             // 0x0012b210: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012b214: nop 
    sp = sp + -0x10;                                            // 0x0012b218: addiu $sp, $sp, -0x10
    return func_00141c98();  // Tail call                        // 0x0012b224: j 0x141c80
    sp = sp + 0x10;                                             // 0x0012b228: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012b22c: nop 
    sp = sp + -0x10;                                            // 0x0012b230: addiu $sp, $sp, -0x10
    return func_00141ce0();  // Tail call                        // 0x0012b23c: j 0x141cb0
    sp = sp + 0x10;                                             // 0x0012b240: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012b244: nop 
    sp = sp + -0x10;                                            // 0x0012b248: addiu $sp, $sp, -0x10
    return func_00141cc8();  // Tail call                       // 0x0012b254: j 0x141cc8
    sp = sp + 0x10;                                             // 0x0012b258: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012b25c: nop 
    sp = sp + -0x10;                                            // 0x0012b260: addiu $sp, $sp, -0x10
    return func_00141cf8();  // Tail call                        // 0x0012b26c: j 0x141ce0
    sp = sp + 0x10;                                             // 0x0012b270: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012b274: nop 
    sp = sp + -0x10;                                            // 0x0012b278: addiu $sp, $sp, -0x10
    return func_00141d38();  // Tail call                        // 0x0012b284: j 0x141cf8
    sp = sp + 0x10;                                             // 0x0012b288: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012b28c: nop 
    sp = sp + -0x10;                                            // 0x0012b290: addiu $sp, $sp, -0x10
    func_00141c68();  // 141c68                                // 0x0012b298: jal 0x141c68
    /* nop */                                                   // 0x0012b29c: nop 
    func_00141c80();  // 141c80                                // 0x0012b2a0: jal 0x141c80
    /* nop */                                                   // 0x0012b2a4: nop 
    func_00141cc8();  // 0x141cc8                               // 0x0012b2a8: jal 0x141cc8
    /* nop */                                                   // 0x0012b2ac: nop 
    func_00141ce0();  // 141ce0                                // 0x0012b2b0: jal 0x141ce0
    /* nop */                                                   // 0x0012b2b4: nop 
    func_00141cf8();  // 141cf8                                // 0x0012b2b8: jal 0x141cf8
    /* nop */                                                   // 0x0012b2bc: nop 
    return;                                                     // 0x0012b2c8: jr $ra
    sp = sp + 0x10;                                             // 0x0012b2cc: addiu $sp, $sp, 0x10
}
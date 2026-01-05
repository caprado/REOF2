void func_00137218() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00137218: addiu $sp, $sp, -0x40
    func_001413c0();  // 1413c0                                // 0x0013724c: jal 0x1413c0
    v1 = *(int8_t*)((s0) + 2);                                  // 0x00137254: lb $v1, 2($s0)
    if (v1 == 0) goto label_0x137270;                           // 0x00137258: beqz $v1, 0x137270
    v0 = 3;                                                     // 0x0013725c: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x137270;                          // 0x00137260: beq $v1, $v0, 0x137270
    v0 = 9;                                                     // 0x00137264: addiu $v0, $zero, 9
    if (v1 != v0) goto label_0x137298;                          // 0x00137268: bne $v1, $v0, 0x137298
    /* nop */                                                   // 0x0013726c: nop 
label_0x137270:
    v0 = 2;                                                     // 0x00137270: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x30) = s2;                             // 0x00137274: sw $s2, 0x30($s0)
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x00137278: sb $v0, 1($s0)
    v0 = 1;                                                     // 0x0013727c: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x00137280: sb $v0, 2($s0)
    s4 = 1;                                                     // 0x00137284: addiu $s4, $zero, 1
    *(uint32_t*)((s0) + 0x18) = s1;                             // 0x00137288: sw $s1, 0x18($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00137294: sw $zero, 4($s0)
label_0x137298:
    func_00141438();  // 141438                                // 0x00137298: jal 0x141438
    /* nop */                                                   // 0x0013729c: nop 
    return;                                                     // 0x001372c0: jr $ra
    sp = sp + 0x40;                                             // 0x001372c4: addiu $sp, $sp, 0x40
}
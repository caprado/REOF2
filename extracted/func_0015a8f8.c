void func_0015a8f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0015a8f8: addiu $sp, $sp, -0x50
    s3 = a2 + -4;                                               // 0x0015a900: addiu $s3, $a2, -4
    s4 = a1 + 4;                                                // 0x0015a918: addiu $s4, $a1, 4
    if (s3 <= 0) goto label_0x15a9cc;                           // 0x0015a92c: blez $s3, 0x15a9cc
    s7 = 0x22 << 16;                                            // 0x0015a934: lui $s7, 0x22
    s6 = 0x22 << 16;                                            // 0x0015a938: lui $s6, 0x22
    s5 = 3;                                                     // 0x0015a93c: addiu $s5, $zero, 3
    s0 = s4 + s2;                                               // 0x0015a940: addu $s0, $s4, $s2
    /* nop */                                                   // 0x0015a944: nop 
label_0x15a948:
    s2 = s2 + 1;                                                // 0x0015a948: addiu $s2, $s2, 1
    a1 = &str_00226e30;  // "STCCODE"                           // 0x0015a950: addiu $a1, $s7, 0x6e30
    func_0010b2a0();  // 0x10b0e8                                // 0x0015a954: jal 0x10b0e8
    a2 = 7;                                                     // 0x0015a958: addiu $a2, $zero, 7
    if (v0 != 0) goto label_0x15a978;                           // 0x0015a95c: bnez $v0, 0x15a978
    a0 = s0 + 0x10;                                             // 0x0015a960: addiu $a0, $s0, 0x10
    func_001037b0();  // 0x103788                                // 0x0015a964: jal 0x103788
    /* nop */                                                   // 0x0015a968: nop 
    if (v0 != 0) v1 = s5;                                       // 0x0015a970: movn $v1, $s5, $v0
    *(uint32_t*)((s1) + 0x364) = v1;                            // 0x0015a974: sw $v1, 0x364($s1)
label_0x15a978:
    a1 = &str_00226e38;  // "\nCRI MPV/PS2EE Ver.1.862 Build:Jul 29 2003 15:13:45\n" // 0x0015a97c: addiu $a1, $s6, 0x6e38
    func_0010b2a0();  // 0x10b0e8                                // 0x0015a980: jal 0x10b0e8
    a2 = 7;                                                     // 0x0015a984: addiu $a2, $zero, 7
    if (v0 != 0) goto label_0x15a9b4;                           // 0x0015a988: bnez $v0, 0x15a9b4
    a0 = s0 + 0x10;                                             // 0x0015a98c: addiu $a0, $s0, 0x10
    func_001037b0();  // 0x103788                                // 0x0015a990: jal 0x103788
    /* nop */                                                   // 0x0015a994: nop 
    a0 = s0 + 0x18;                                             // 0x0015a998: addiu $a0, $s0, 0x18
    func_001037b0();  // 0x103788                                // 0x0015a99c: jal 0x103788
    *(uint32_t*)((s1) + 0x358) = v0;                            // 0x0015a9a0: sw $v0, 0x358($s1)
    a0 = s0 + 0x20;                                             // 0x0015a9a4: addiu $a0, $s0, 0x20
    func_001037b0();  // 0x103788                                // 0x0015a9a8: jal 0x103788
    *(uint32_t*)((s1) + 0x35c) = v0;                            // 0x0015a9ac: sw $v0, 0x35c($s1)
    *(uint32_t*)((s1) + 0x360) = v0;                            // 0x0015a9b0: sw $v0, 0x360($s1)
label_0x15a9b4:
    func_00158310();  // 0x158278                                // 0x0015a9b4: jal 0x158278
    if (v0 != 0) goto label_0x15a9cc;                           // 0x0015a9bc: bnez $v0, 0x15a9cc
    v1 = (s2 < s3) ? 1 : 0;                                     // 0x0015a9c0: slt $v1, $s2, $s3
    if (v1 != 0) goto label_0x15a948;                           // 0x0015a9c4: bnez $v1, 0x15a948
    s0 = s4 + s2;                                               // 0x0015a9c8: addu $s0, $s4, $s2
label_0x15a9cc:
    return;                                                     // 0x0015a9f4: jr $ra
    sp = sp + 0x50;                                             // 0x0015a9f8: addiu $sp, $sp, 0x50
}